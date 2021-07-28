#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> G(n);
    rep(i, n - 1)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<ll> dist(n, -1);
    queue<ll> que;
    dist[0] = 0;
    que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty())
    {
        ll v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (ll nv : G[v])
        {
            if (dist[nv] != -1)
                continue; // すでに発見済みの頂点は探索しない

            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    rep(i, q)
    {
        ll c, d;
        cin >> c >> d;
        c--, d--;
        if (abs(dist[c] - dist[d]) % 2 == 0)
            cout << "Town" << endl;
        else
            cout << "Road" << endl;
    }
}

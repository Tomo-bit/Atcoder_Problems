#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;
const int INF = 1001001001;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> to(n);
    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        to[a - 1].push_back(b - 1);
        to[b - 1].push_back(a - 1);
    }
    vector<int> dist(n, INF);
    vector<ll> r(n, 0);
    r[0] = 1;
    dist[0] = 0;
    queue<ll> q;
    q.push(0);
    ll ans = 0;
    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        for (ll u : to[v])
        {
            if (dist[u] != INF && dist[u] == dist[v] + 1)
            {
                r[u] += r[v];
                r[u] %= mod;
                continue;
            }
            if (dist[u] == INF)
            {
                r[u] = r[v];
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }
    }
    cout << r[n - 1] << endl;
}

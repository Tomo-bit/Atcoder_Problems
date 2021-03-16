#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v)
{
    seen[v] = true;
    for (auto next_v : G[v])
    {
        if (seen[next_v])
            continue;
        dfs(G, next_v); // 再帰的に探索
    }
}

int main()
{
    // 頂点数と辺数
    int N;
    cin >> N;
    int M = N;

    // グラフ入力受取
    Graph G(N);
    for (int i = 0; i < M; ++i)
    {
        int b;
        cin >> b;
        G[i].push_back(b - 1);
        G[b - 1].push_back(i);
    }

    // 全頂点が訪問済みになるまで探索
    int count = 0;
    seen.assign(N, false);
    for (int v = 0; v < N; ++v)
    {
        if (seen[v])
            continue; // v が探索済みだったらスルー
        dfs(G, v);    // v が未探索なら v を始点とした DFS を行う
        ++count;
    }
    ll ans = 1;

    rep(i, count)
    {
        ans *= 2;
        ans %= 998244353;
    }
    cout << ans - 1 << endl;
}

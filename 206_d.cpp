#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

using Graph = vector<vector<ll>>;

void dfs(int v, vector<bool> &flag, Graph &g)
{
    if (!flag[v])
    {
        return;
    }
    flag[v] = false;
    for (auto &nx : g[v])
    {
        dfs(nx, flag, g);
    }
}

int main()
{
    ll n;
    cin >> n;
    ll res = 0;
    vector<ll> a(n);
    vector<bool> flag(200005, false);
    Graph g(200005);
    rep(i, n) cin >> a[i];
    for (auto &nx : a)
    {
        if (!flag[nx])
        {
            flag[nx] = true;
            res++;
        }
    }
    ll p = 0, q = n - 1;
    while (p < q)
    {
        g[a[p]].push_back(a[q]);
        g[a[q]].push_back(a[p]);
        p++, q--;
    }
    for (int i = 1; i <= 200000; i++)
    {
        if (flag[i])
        {
            res--;
            dfs(i, flag, g);
        }
    }
    cout << res << endl;
}

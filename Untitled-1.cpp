#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> g(n + 10);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }
    rep(i, n + 10)
    {
        sort(g[i].begin(), g[i].end());
    }
    int now = 0;
    vector<int> al(n, 0);
    vector<int> d(n, n + 10);
    al[0] = 1;
    while (true)
    {
        cout << now + 1 << " ";
        al[now] = 1;
        int vmin = n + 10;
        for (int v : g[now])
        {
            if (al[v] == 0)
            {
                vmin = v;
                g[now].erase(g[now].begin());
                break;
            }
        }
        if (vmin == n + 10)
        {
            if (now == 0)
                break;
            else
            {
                now = d[now];
            }
        }
        else
        {

            if (d[vmin] == n + 10)
            {
                d[vmin] = now;
            }
            now = vmin;
        }
    }
}

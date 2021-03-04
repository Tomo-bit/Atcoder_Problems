#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    vector<int> t;
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        v[i].first = a;
        v[i].second = b;
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        for (auto p : v)
        {
            if (p.first == i)
            {
                t[p.second] = t[p.first];
            }
        }
    }
}

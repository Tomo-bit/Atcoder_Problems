#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int a, b;
    vector<pair<int, int>> d(n);
    rep(i, n)
    {
        cin >> a >> b;
        d[i].first = b;
        d[i].second = a;
    }
    sort(d.begin(), d.end());
    ll limit = 0;
    rep(i, n)
    {
        limit += d[i].second;
        if (limit > d[i].first)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}

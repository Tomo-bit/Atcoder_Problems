#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    vector<int> d;
    cin >> n >> k;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        a = a - b;
        d.push_back(a);
        d.push_back(b);
    }
    sort(d.rbegin(), d.rend());
    ll sum = 0;
    rep(i, k)
    {
        sum += d[i];
    }
    cout << sum << endl;
}

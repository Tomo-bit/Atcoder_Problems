#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    string s;
    cin >> n;
    cin >> s;
    vector<ll> a;
    ll cnt = 0;
    rep(i, n)
    {
        cnt++;
        if (s[i] != s[i + 1])
        {
            a.push_back(cnt);
            cnt = 0;
        }
    }
    ll ret = 0;
    rep(i, a.size())
    {
        ret += a[i] * (a[i] + 1) / 2;
    }
    cout << n * (n + 1) / 2 - ret << endl;
}

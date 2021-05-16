#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    string s, t;
    cin >> n;
    cin >> s >> t;
    int s_0 = 0, t_0 = 0;
    ll cnt = 0;
    ll l = 0;
    rep(i, n)
    {
        if (s[i] == '0')
            s_0++;
        if (t[i] == '0')
            t_0++;
        if (s_0 == t_0 && s[i] == '0' && s[i] == t[i])
        {
            l++;
        }
    }
    if (s_0 != t_0)
    {
        cout << -1 << endl;
        return 0;
    }
    if (s == t)
    {
        cout << 0 << endl;
        return 0;
    }
    rep(i, n)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
    }

    cout << s_0 - l << endl;
}

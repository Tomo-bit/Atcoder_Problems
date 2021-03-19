#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, k, R, S, P;
    string t;
    cin >> n >> k >> R >> S >> P >> t;
    int ans = 0;
    vector<string> s(n);
    rep(i, k)
    {
        if (t[i] == 'r')
        {
            ans += P;
            s[i] = "p";
        }
        if (t[i] == 's')
        {
            ans += R;
            s[i] = "r";
        }
        if (t[i] == 'p')
        {
            ans += S;
            s[i] = "s";
        }
    }
    for (int i = k; i < n; i++)
    {
        if (t[i] == 'r' && s[i - k] != "p")
        {
            ans += P;
            s[i] = "p";
        }
        else if (t[i] == 's' && s[i - k] != "r")
        {
            ans += R;
            s[i] = "r";
        }
        else if (t[i] == 'p' && s[i - k] != "s")
        {
            ans += S;
            s[i] = "s";
        }
        else
            s[i] = "kk";
    }
    cout << ans << endl;
}

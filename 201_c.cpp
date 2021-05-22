#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    rep(i, 10000)
    {
        bool ok = true;
        int a = i / 1000;
        int b = (i - a * 1000) / 100;
        int c = (i - a * 1000 - b * 100) / 10;
        int d = (i - a * 1000 - b * 100 - c * 10);

        if (s[a] == 'x' || s[b] == 'x' || s[c] == 'x' || s[d] == 'x')
            continue;
        rep(j, 10)
        {
            if (j == a || j == b || j == c || j == d)
                continue;
            if (s[j] == 'o')
            {
                ok = false;
                break;
            }
        }
        if (ok == false)
            continue;

        ans++;
    }
    cout << ans << endl;
}

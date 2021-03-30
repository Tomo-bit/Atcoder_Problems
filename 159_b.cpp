#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    rep(i, (n - 1) / 2)
    {
        if (s[i] != s[n - 1 - i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i, ((n - 1) / 2) / 2)
    {
        if (s[i] != s[(n - 1) / 2 - 1 - i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i, (n - (n + 3) / 2 + 1) / 2)
    {
        if (s[(n + 3) / 2 - 1 + i] != s[n - 1 - i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}

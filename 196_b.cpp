#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string ans;
    for (char c : s)
    {
        if (c == '.')
            break;
        ans += c;
    }
    cout << ans << endl;
}

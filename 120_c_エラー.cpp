#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main()
{
    string s;
    cin >> s;
    int length = s.length();
    vector<char> v(length);
    rep(i, length - 1)
    {
        v[i] = s[i];
    }
    int i = 0;
    int ans = 0;
    while (!(v.empty()))
    {
        if (v[i] != v[i + 1])
        {
            v.erase(v.begin() + i);
            cout << 22 << endl;
            v.erase(v.begin() + (i + 1));
            i = 0;
            length -= 2;
            ans += 2;
            cout << 2 << endl;
            continue;
        }
        else
        {
            i++;
            if (i == (length - 2))
            {
                break;
            }
            cout << 6 << endl;
        }
    }
    cout << ans << endl;
}

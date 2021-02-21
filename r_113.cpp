#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int count(string s, int i)
{
    int count = 0;
    for (int k = i + 2; k < s.size(); k++)
    {
        if (s[k] != s[i])
        {
            count++;
            s.replace(k, 1, s.substr(i, 1));
        }
    }

    return count;
}

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = s.size() - 3; i >= 0; i--)
    {
        if (s[i] == s[i + 1])
        {
            ans += count(s, i);
        }
    }
    cout << ans << endl;
}

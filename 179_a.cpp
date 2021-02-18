#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    if (s[s.length() - 1] == 's')
    {
        s += "es";
    }
    else
    {
        s += "s";
    }
    cout << s << endl;
}

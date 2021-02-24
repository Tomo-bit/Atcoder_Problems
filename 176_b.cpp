#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    int x = 0;
    rep(i, s.length())
    {
        x += s[i] - '0';
    }
    if (x % 9 == 0)
        cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }
}

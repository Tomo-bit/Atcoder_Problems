#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    string u;
    cin >> u;

    if (u == s)
    {
        cout << a - 1 << " " << b << endl;
    }
    else
    {
        cout << a << " " << b - 1 << endl;
    }
}

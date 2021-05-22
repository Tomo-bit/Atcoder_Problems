#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            cout << 0;
        if (s[i] == '1')
            cout << 1;
        if (s[i] == '6')
            cout << 9;
        if (s[i] == '8')
            cout << 8;
        if (s[i] == '9')
            cout << 6;
    }
    cout << "" << endl;
}

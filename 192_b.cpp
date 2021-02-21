#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    while (i < s.length())
    {
        if (isupper(s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
        i++;
        if (islower(s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
        i++;
    }
    cout << "Yes" << endl;
}

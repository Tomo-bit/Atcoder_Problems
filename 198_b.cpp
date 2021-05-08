#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    while (n % 10 == 0)
        n /= 10;
    string s = to_string(n);
    string rs = s;
    reverse(rs.begin(), rs.end());
    if (rs == s)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}

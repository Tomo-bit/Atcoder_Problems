#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b != c)
        cout << "Yes" << endl;
    else if (b == c && c != a)
        cout << "Yes" << endl;
    else if (c == a && a != b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

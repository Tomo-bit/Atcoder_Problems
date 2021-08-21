#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    int r;
    cin >> r;
    int a, b, c, d;
    a = r / 1000;
    b = r % 1000 / 100;
    c = r % 100 / 10;
    d = r % 10;
    if (b == (a + 1) % 10 && c == (b + 1) % 10 && d == (c + 1) % 10)
        cout << "Weak" << endl;
    else if (a == b && b == c && c == d)
        cout << "Weak" << endl;
    else
        cout << "Strong" << endl;
}

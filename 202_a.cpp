#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    a = abs(a - 7);
    b = abs(b - 7);
    c = abs(c - 7);
    cout << a + b + c << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> as(a), bs(b);
    if (a >= b)
    {
        rep(i, a)
        {
            cout << i + 1 << " ";
        }
        rep(i, b - 1)
        {
            cout << -(i + 1) << " ";
        }
        cout << -(a - b + 1) * (a + b) / 2 << endl;
    }
    if (b > a)
    {
        rep(i, b)
        {
            cout << -(i + 1) << " ";
        }
        rep(i, a - 1)
        {
            cout << (i + 1) << " ";
        }
        cout << (b - a + 1) * (b + a) / 2 << endl;
    }
}

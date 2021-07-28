#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int x, y;
    cin >> x >> y;
    if ((x == 0 && y == 1) || (x == 1 && y == 0))
        cout << 2 << endl;
    if ((x == 1 && y == 2) || (x == 2 && y == 1))
        cout << 0 << endl;
    if ((x == 2 && y == 0) || (x == 0 && y == 2))
        cout << 1 << endl;
    if (x == 0 && y == 0)
        cout << 0 << endl;
    if (x == 1 && y == 1)
        cout << 1 << endl;
    if (x == 2 && y == 2)
        cout << 2 << endl;
}

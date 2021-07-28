#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b - a + 1 < 0)
        cout << 0 << endl;
    else
        cout << b - a + 1 << endl;
}

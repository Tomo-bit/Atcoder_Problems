#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    int a = (h + 2 - 1) / 2;
    int b = (w + 2 - 1) / 2;
    if (h == 1)
        cout << w << endl;
    else if (w == 1)
        cout << h << endl;
    else
        cout << a * b << endl;
}

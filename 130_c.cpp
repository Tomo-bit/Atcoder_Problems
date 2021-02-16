#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main()
{
    long double w, h, x, y;
    cin >> w >> h >> x >> y;
    long double ans = w * h / 2;
    if ((x == w / 2 && y == h / 2))
    {
        cout << ans << " " << 1 << endl;
    }
    else
    {
        cout << ans << " " << 0 << endl;
    }
}

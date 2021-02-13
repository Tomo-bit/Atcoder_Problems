#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y, ans;
    cin >> a >> b >> x >> y;
    if (a > b)
    {
        ans = min(x + y * (a - b - 1), x * (2 * (a - b - 1) + 1));
    }
    if (a == b)
    {
        ans = x;
    }
    if (a < b)
    {
        ans = min(x + y * (b - a), x * (2 * (b - a) + 1));
    }
    cout << ans << endl;
}

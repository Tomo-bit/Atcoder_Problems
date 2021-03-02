#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    if (a * a * b <= x)
    {
        cout << 0 << endl;
        return 0;
    }
    if (x >= a * a * b / 2)
        cout << std::fixed << std::setprecision(15) << (long double)atan2((2 * a * a * b - 2 * x), (a * a * a)) * 180 / 3.141592653589 << endl;
    else
        cout << std::fixed << std::setprecision(15) << (long double)atan2((a * b * b), (2 * x)) * 180 / 3.141592653589 << endl;
}

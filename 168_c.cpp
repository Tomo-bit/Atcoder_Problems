#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    long double a, b, h, m;
    cin >> a >> b >> h >> m;
    long double arg = ((h + m / 60) * 1.833333333333333333) * 3.14159265358979323846;
    long double ans = sqrt(a * a + b * b - 2 * a * b * cos(arg));
    cout << std::fixed << std::setprecision(15) << ans << endl;
}

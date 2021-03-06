#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    double n;
    cin >> n;
    double ans = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        ans += (n / (n - i));
    }
    cout << std::fixed << std::setprecision(15) << ans << endl;
}

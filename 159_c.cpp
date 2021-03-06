#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    double l;
    cin >> l;
    double ans = l * l * l / 27;
    cout << std::fixed << std::setprecision(15) << ans << endl;
}

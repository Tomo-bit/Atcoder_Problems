#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    rep(i, n - 1) ans += i + 1;
    cout << ans << endl;
}

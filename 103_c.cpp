#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int a;
    rep(i, n)
    {
        cin >> a;
        ans += a - 1;
    }

    cout << ans << endl;
}

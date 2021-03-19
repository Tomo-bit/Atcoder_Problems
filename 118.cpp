#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a;
    cin >> a;
    int ans = a;
    rep(i, n - 1)
    {
        int a;
        cin >> a;
        ans = gcd(ans, a);
    }
    cout << ans << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    sort(v.rbegin(), v.rend());
    n--;
    ll ans = 0;
    ans += v[0];
    n--;
    int i = 1;
    while (n >= 2)
    {

        ans += 2 * v[i];
        i++;
        n -= 2;
    }
    if (n == 1)
    {
        ans += v[i];
    }
    cout << ans << endl;
}

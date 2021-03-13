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
    int m = 1000000;
    rep(i, n)
    {
        int a;
        cin >> a;
        m = min(m, a);
        if (a <= m)
            ans++;
    }
    cout << ans << endl;
}

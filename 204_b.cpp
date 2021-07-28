#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    rep(i, n)
    {
        int a;
        cin >> a;
        if (a <= 10)
            continue;
        else
            ans += a - 10;
    }
    cout << ans << endl;
}

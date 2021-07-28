#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll r = 0;
    if (b >= c * d)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        ll cnt = 0;
        while (true)
        {
            cnt++;
            a += b;
            r += c;
            if (a <= r * d)
            {
                cout << cnt << endl;
                return 0;
            }
        }
    }
}

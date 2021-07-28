#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    rep(i, n)
    {
        ll b;
        cin >> b;
        a[i] = b;
        sum += b;
    }
    ll e = 0, l = 0, r = 0;
    rep(i, 200000000)
    {

        if (e * 10 == sum)
        {
            cout << "Yes" << endl;
            return 0;
        }
        if (e * 10 < sum)
        {
            e += a[r];
            r++;
            r %= n;
        }
        else if (e * 10 > sum)
        {
            e -= a[l];
            l++;
            l %= n;
            if (l == 0)
                break;
        }
    }
    cout << "No" << endl;
}

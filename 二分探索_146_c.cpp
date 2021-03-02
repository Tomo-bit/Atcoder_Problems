#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll GetDigit(ll num)
{
    ll digit = 0;
    while (num != 0)
    {
        num /= 10;
        digit++;
    }
    return digit;
}

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;
    ll l = 0, r = 1000000001;
    while (r - l > 1)
    {
        ll c = (l + r) / 2;
        if (a * c + b * GetDigit(c) <= x)
            l = c;
        else
            r = c;
    }
    cout << l << endl;
}

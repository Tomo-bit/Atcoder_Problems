#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll w = n / (a + b);
    ll r = n % (a + b);
    if (r <= a)
        cout << w * a + r << endl;
    else
        cout << w * a + a << endl;
}

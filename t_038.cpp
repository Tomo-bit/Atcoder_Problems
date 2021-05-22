#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll a, b;
    cin >> a >> b;
    ll r = b / gcd(a, b);
    if (r > 1000000000000000000 / a)
    {
        cout << "Large" << endl;
    }
    else
        cout << lcm(a, b) << endl;
}

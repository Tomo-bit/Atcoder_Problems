#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    rep(i, k)
    {
        if (n % 200 == 0)
            n /= 200;
        else
            n = n * 1000 + 200;
    }
    cout << n << endl;
}

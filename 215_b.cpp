#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    while (n > 1)
    {
        n /= 2;
        cnt++;
    }
    cout << cnt << endl;
}

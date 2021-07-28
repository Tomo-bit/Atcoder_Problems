#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

const int mod = 1000000007;
int binpower(int a, long long b)
{
    int ans = 1;
    while (b != 0)
    {
        if (b % 2 == 1)
        {
            ans = (long long)(ans)*a % mod;
        }
        a = (long long)(a)*a % mod;
        b /= 2;
    }
    return ans;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    if (n == 1)
        cout << k % mod << endl;
    else if (n == 2)
        cout << k % mod * (k - 1) % mod << endl;
    else
    {
        cout << k % mod * (k - 1) % mod * binpower(k - 2, n - 2) % mod << endl;
    }
}

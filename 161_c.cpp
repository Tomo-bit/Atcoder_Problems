#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n, k;
    cin >> n >> k;
    while (n > abs(n - k))
    {
        if (n > k)
        {
            n = n % k;
        }
        else
            n = k % n;
    }
    cout << n << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool IsPrime(ll num)
{
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main()
{
    ll n;
    cin >> n;
    ll m = n;
    ll ans = 0;

    for (ll i = 2; i <= sqrt(m); i++)
    {
        if (IsPrime(i))
        {
            int k = i;
            while (n % k == 0)
            {
                if (n % k == 0)
                {
                    n /= k;
                    ans++;
                    k *= i;
                }
            }
        }
    }

    cout << ans << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool is_prime(const unsigned n)
{
    switch (n)
    {
    case 0: // fall-through
    case 1:
        return false;
    case 2: // fall-through
    case 3:
        return true;
    } // n > 3 が保証された

    if (n % 2 == 0 || n % 3 == 0)
        return false;
    // n は 2 と 3 のいずれの倍数でもないことが保証された
    // これより n は (6の倍数)-1 か (6の倍数)+1 である

    // 6の倍数前後の数を使って試し割りをする
    for (unsigned i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0)
            return false; // (6の倍数)-1
        if (n % (i + 2) == 0)
            return false; // (6の倍数)+1
    }

    return true;
}

int main()
{
    ll n;
    cin >> n;
    ll count = 0;
    ll g;
    set<ll> s;
    ll k;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        k = i;
        g = n;
        if (!s.count(i))
        {
            s.insert(k);
            while (g >= i)
            {
                g /= i;
                k *= i;
                s.insert(k);
                if (g >= i)
                {
                    count++;
                }
            }
        }
    }
    cout << n - count << endl;
}

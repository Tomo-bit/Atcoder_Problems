#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool is_prime(long long N)
{
    if (N == 1)
        return false;
    for (long long i = 2; i * i <= N; ++i)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> p;
    rep(i, n) cin >> x[i];
    for (int i = 2; i <= 50; i++)
    {
        if (is_prime(i))
        {
            p.push_back(i);
        }
    }

    set<ll> s;
    rep(is, 1 << p.size())
    {
        ll f = 1;
        rep(i, p.size())
        {

            if (is >> i & 1)
                f *= p[i];
        }
        bool d = true;
        rep(i, n)
        {
            if (gcd(x[i], f) == 1)
            {
                d = false;
            }
        }
        if (d)
            s.insert(f);
    }
    cout << *begin(s) << endl;
}

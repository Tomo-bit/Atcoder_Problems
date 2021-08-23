#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

std::vector<int> Eratosthenes(const int N)
{
    std::vector<bool> is_prime(N + 1);
    for (int i = 0; i <= N; i++)
    {
        is_prime[i] = true;
    }
    std::vector<int> P;
    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
            P.emplace_back(i);
        }
    }
    return P;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> k(m);
    rep(i, m)
    {
        k[i] = ll(i + 1);
    }
    set<int> s;
    vector<int> p;
    p = Eratosthenes(m);

    rep(i, n)
    {
        ll a;
        cin >> a;
        for (ll j : p)
        {

            if (ll(sqrt(a)) + 1 < j)
            {
                if (a != 1)
                    s.insert(a);
                break;
            }
            if (a % j == 0)
            {
                if (j != 1)
                {
                    while (a % j == 0)
                    {
                        a /= j;
                    }
                }
                s.insert(j);
            }
        }
    }
    vector<bool> is(m + 1, false);
    for (int i = 1; i <= m; i++)
    {
        is[i] = false;
    }
    for (int i : s)
    {
        if (1 <= i && i <= m)
            is[i] = true;
    }
    vector<int> Ps;
    for (int i = 1; i <= m; i++)
    {
        if (is[i])
        {
            for (int j = 2 * i; j <= m; j += i)
            {
                is[j] = true;
            }
        }
        else
            Ps.emplace_back(i);
    }

    cout << Ps.size() << endl;
    for (int i : Ps)
    {
        cout << i << endl;
    }
}

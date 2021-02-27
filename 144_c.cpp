#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    ll g = n + 1;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            g = min(g, n / i + i);
        }
    }
    cout << g - 2 << endl;
}

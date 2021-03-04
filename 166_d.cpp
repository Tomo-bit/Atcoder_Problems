#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        ll m = n + i * i * i * i * i;
        for (int j = 1; j <= sqrt(m); j++)
        {
            if (m == j * j * j * j * j)
            {
                cout << j << " " << i << endl;
            }
        }
    }
}

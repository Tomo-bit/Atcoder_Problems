#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    for (ll i = -200; i <= 200; i++)
    {
        for (ll j = -200; j <= 200; j++)
        {
            if (i * i * i * i * i - j * j * j * j * j == n)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}

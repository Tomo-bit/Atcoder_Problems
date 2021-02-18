#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    int a;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a = n / i;
        }
    }
    while (a != 0)
    {
        a /= 10;
        ans++;
    }
    cout << ans << endl;
}

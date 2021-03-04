#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    ll a = 100;
    ll cnt = 0;
    while (a < n)
    {
        a += a / 100;
        cnt++;
    }
    cout << cnt << endl;
}

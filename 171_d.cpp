#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> a;
    ll s = 0;
    rep(i, n)
    {
        ll d;
        cin >> d;
        a[d]++;
        s += d;
    }
    ll q;
    cin >> q;
    rep(i, q)
    {
        ll b, c;
        cin >> b >> c;
        if (a.count(b))
        {
            s += a[b] * (c - b);
            a[c] += a[b];
            a.erase(b);
        }
        cout << s << endl;
    }
}

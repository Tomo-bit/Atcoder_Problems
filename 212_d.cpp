#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    int q;
    cin >> q;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll d = 0;
    rep(i, q)
    {
        ll a;
        ll b;
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            pq.push(b - d);
        }
        if (a == 2)
        {
            cin >> b;
            d += b;
        }
        if (a == 3)
        {
            cout << pq.top() + d << endl;
            pq.pop();
        }
    }
}

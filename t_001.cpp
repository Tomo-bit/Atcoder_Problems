#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll n, l;
ll k;
vector<ll> a(10000000);

bool ok(int w)
{
    int cnt = 0;
    int pre = 0;
    rep(i, n)
    {
        if (a[i] - pre >= w && l - a[i] >= w)
        {
            cnt++;
            pre = a[i];
        }
    }
    if (cnt < k)
        return false;
    else
        return true;
}

int main()
{
    cin >> n >> l;
    cin >> k;

    rep(i, n)
    {
        cin >> a[i];
    }
    ll left = -1;
    ll right = l + 1;
    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;
        if (ok(mid) == true)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }

    cout << left << endl;
}

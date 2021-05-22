#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int cnt = 0;
    rep(i, q)
    {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
            iter_swap(a.begin() + (x - 1 - cnt + n) % n, a.begin() + (y - 1 - cnt + n) % n);
        if (t == 2)
            cnt++;
        cnt %= n;
        if (t == 3)
            cout << a[(x - 1 - cnt + n) % n] << endl;
    }
}

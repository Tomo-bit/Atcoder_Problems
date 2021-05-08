#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int w, n;
    cin >> w >> n;
    vector<int> h(w + 1, 0);
    rep(i, n)
    {
        int l, r;
        cin >> l >> r;
        int hmax = h[l];
        for (int j = l; j <= r; j++)
        {
            hmax = max(hmax, h[j]);
        }
        for (int j = l; j <= r; j++)
        {
            h[j] = hmax + 1;
        }
        cout << hmax + 1 << endl;
    }
}

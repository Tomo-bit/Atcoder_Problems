#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    vector<int> id(n);
    rep(i, n)
    {
        cin >> h[i];
        id[i] = 1;
    }
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        if (h[a - 1] >= h[b - 1])
        {
            id[b - 1] = 0;
        }
        if (h[a - 1] <= h[b - 1])
        {
            id[a - 1] = 0;
        }
    }
    int ans = count(id.begin(), id.end(), 1);
    cout << ans << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int w, n;
    cin >> w >> n;
    vector<int> h(2 * n, 0);
    vector<int> vals;
    vector<vector<int>> data(n, vector<int>(2));
    rep(i, n)
    {
        rep(j, 2)
        {
            cin >> data[i][j];
        }
    }
    rep(i, n)
    {
        rep(j, 2)
        {
            vals.push_back(data[i][j]);
        }
    }
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    cout << vals[2 * n - 1] << endl;

    rep(i, n)
    {
        int l, r;
        l = data[i][0], r = data[i][1];
        int id1 = lower_bound(vals.begin(), vals.end(), l) - vals.begin();
        int id2 = lower_bound(vals.begin(), vals.end(), r) - vals.begin();
        int hmax = h[id1];
        for (int j = id1; j <= id2; j++)
        {
            hmax = max(hmax, h[j]);
        }
        for (int j = id1; j <= id2; j++)
        {
            h[j] = hmax + 1;
        }
        cout << hmax + 1 << endl;
    }
}

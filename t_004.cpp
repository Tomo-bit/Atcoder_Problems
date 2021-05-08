#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> data(h, vector<int>(w));
    vector<vector<int>> ans(h, vector<int>(w));
    vector<int> sumh(h);
    vector<int> sumw(w);
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> data[i][j];
        }
    }
    rep(i, h)
    {
        int d = 0;

        rep(j, w)
        {

            d += data[i][j];
        }
        sumh[i] = d;
    }
    rep(i, w)
    {
        int d = 0;

        rep(j, h)
        {

            d += data[j][i];
        }
        sumw[i] = d;
    }
    rep(i, h)
    {

        rep(j, w)
        {
            int d = 0;
            d = sumh[i] + sumw[j] - data[i][j];
            ans[i][j] = d;
        }
    }
    rep(i, h)
    {
        rep(j, w)
        {
            cout << ans[i][j];
            cout << " ";
        }
        cout << endl;
    }
}

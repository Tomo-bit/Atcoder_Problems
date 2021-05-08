#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> data(1001, vector<int>(1001));
    rep(i, n)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        data[x1][y1]++;
        data[x1][y2]--;
        data[x2][y1]--;
        data[x2][y2]++;
    }
    rep(i, 1001)
    {
        rep(j, 1000)
        {
            data[j + 1][i] += data[j][i];
        }
    }
    rep(i, 1001)
    {
        rep(j, 1000)
        {
            data[i][j + 1] += data[i][j];
        }
    }

    vector<int> a(n + 1, 0);
    rep(i, 1001)
    {
        rep(j, 1001)
        {
            a[data[i][j]]++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }
}

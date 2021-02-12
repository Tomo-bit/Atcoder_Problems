#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a.at(i).at(j);
        }
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int now = 0;
        for (int j = 0; j < m; j++)
        {
            now += b[j] * a.at(i).at(j);
        }
        if ((now + c) > 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

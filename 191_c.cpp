#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> p(h);
    for (int i = 0; i < h; i++)
    {
        cin >> p[i];
    }
    int ans = 0;
    for (int i = 0; i < h - 1; i++)
    {
        for (int j = 0; j < w - 1; j++)
        {
            int g = 0;
            if (p[i][j] == '#')
            {
                g++;
            }
            if (p[i][j + 1] == '#')
            {
                g++;
            }
            if (p[i + 1][j] == '#')
            {
                g++;
            }
            if (p[i + 1][j + 1] == '#')
            {
                g++;
            }
            if (g == 1 || g == 3)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int r = 1;
    int l = -1;
    while (y - 1 + r < w)
    {
        if (s[x - 1][y - 1 + r] == '#')
            break;
        r++;
    }
    while (0 <= y - 1 + l)
    {
        if (s[x - 1][y - 1 + l] == '#')
            break;
        l--;
    }
    l = abs(l);

    int q = 1;
    int e = -1;
    while (x - 1 + q < h)
    {
        if (s[x - 1 + q][y - 1] == '#')
            break;
        q++;
    }
    while (0 <= x - 1 + e)
    {
        if (s[x - 1 + e][y - 1] == '#')
            break;
        e--;
    }
    e = abs(e);

    int ans = r - 1 + l - 1 + q - 1 + e - 1 + 1;
    cout << ans << endl;
}

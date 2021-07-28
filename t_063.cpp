#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int maxsame(vector<int> r)
{
    map<int, int> mp;
    int ret = 0;
    rep(i, r.size())
    {
        mp[r[i]]++;
        ret = max(ret, mp[r[i]]);
    }
    return ret;
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> p(h, vector<int>(w));
    int ans = 0;
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> p[i][j];
        }
    }
    rep(is, 1 << h)
    {
        vector<int> r;
        rep(j, w)
        {
            int idx = -1;
            bool flag = false;
            rep(i, h)
            {
                if (is >> i & 1)
                {
                    if (idx == -1)
                        idx = p[i][j];
                    else if (idx != p[i][j])
                        flag = true;
                }
            }
            if (flag == false)
                r.push_back(idx);
        }
        int H = 0;
        int W = maxsame(r);
        rep(j, h)
        {
            if (is >> j & 1)
                H++;
        }
        ans = max(ans, H * W);
    }
    cout << ans << endl;
}

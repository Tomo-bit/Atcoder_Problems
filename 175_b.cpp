#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    sort(v.begin(), v.end());

    int ans = 0;
    rep(i, n)
    {
        rep(j, i)
        {
            rep(k, j)
            {
                if (v[i] != v[j] && v[j] != v[k] && v[k] != v[i] && v[k] && v[i] < v[j] + v[k])
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}

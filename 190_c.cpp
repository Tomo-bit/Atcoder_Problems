#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
    }
    int k;
    cin >> k;
    vector<int> c(k), d(k);
    for (int i = 0; i < k; i++)
    {
        cin >> c[i] >> d[i];
    }
    int k2 = 1 << k;
    int ans = 0;
    for (int s = 0; s < k2; s++)
    {
        vector<int> dish(n + 1);
        for (int i = 0; i < k; i++)
        {
            if (s >> i & 1)
            {
                dish[d[i]]++;
            }
            else
            {
                dish[c[i]]++;
            }
        }
        int now = 0;
        for (int i = 0; i < m; i++)
        {
            if (dish[a[i]] == 0)
            {
                continue;
            }
            if (dish[b[i]] == 0)
            {
                continue;
            }
            now++;
        }
        ans = max(ans, now);
    }
    cout << ans << endl;
}

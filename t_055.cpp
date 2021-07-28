#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, p, q;
    cin >> n >> p >> q;
    int ans = 0;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    for (int i = 0; i < n - 4; i++)
    {
        for (int j = i + 1; j < n - 3; j++)
        {
            for (int k = j + 1; k < n - 2; k++)
            {
                for (int l = k + 1; l < n - 1; l++)
                {
                    for (int m = l + 1; m < n; m++)
                    {
                        if ((ll(a[i]) * a[j] % p * a[k] % p * a[l] % p * a[m] % p == q))
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}

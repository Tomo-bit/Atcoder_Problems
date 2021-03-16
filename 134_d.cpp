#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    rep(i, n) cin >> a[i + 1];
    int ans = 0;

    for (int i = n; i >= 1; i--)
    {
        int cnt = 0;
        for (int j = i; j < n + 1; j += i)
        {
            cnt += b[j];
        }
        b[i] = (cnt - b[i] - a[i] + 2) % 2;
        if (b[i] == 1)
            ans++;
    }

    cout << ans << endl;

    for (int i = 1; i < n + 1; i++)
    {
        if (b[i] == 1)
            cout << i << endl;
    }
}

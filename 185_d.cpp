#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    vector<int> a(m), b(m + 1);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    if (n == m)
    {
        cout << 0 << endl;
        return 0;
    }
    sort(a.begin(), a.end());
    b[0] = a[0] - 1;
    for (int i = 1; i < m; i++)
    {
        b[i] = a[i] - a[i - 1] - 1;
    }
    b[m] = n - a[m - 1];
    sort(b.begin(), b.end());
    int k = b[0];
    int id = 0;
    for (int i = 1; i < m + 1; i++)
    {
        if (k == 0)
        {
            k = b[i];
        }
        else
        {
            id = i - 1;
            break;
        }
    }
    int ans = 0;
    for (int i = id; i < m + 1; i++)
    {
        ans += (b[i] + k - 1) / k;
    }

    cout << ans << endl;
}

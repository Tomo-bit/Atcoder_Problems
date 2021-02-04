#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    int n0 = n;
    vector<int> a(2*m);
    for (int i = 0; i < 2 * m; i++)
    {
        cin >> a[i];
    }
    n -= a[0];
    if (n <= 0)
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < m-1; i++)
    {
        n += (a[2 * i + 1] - a[2 * i]);
        if (n > n0)
        {
            n = n0;
        }

        n -= (a[2 * (i+1)] - a[2 * (i+1) - 1]);
        if (n <= 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    n += (a[2*m -1] - a[2*m -2]);
    if (n > n0)
    {
        n = n0;
    }
    n -= (t - a[2*m -1]);
    if (n <= 0)
    {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
}

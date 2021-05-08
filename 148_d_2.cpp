#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j < n; j++)
        {
            if (j == n - 1 && a[j] != i)
            {
                if (n - i + 1 == n)
                {
                    cout << -1 << endl;
                    return 0;
                }
                cout << n - i + 1 << endl;
                return 0;
            }
            if (j == n - 1 && a[j] == i)
            {
                if (n - i == n)
                {
                    cout << -1 << endl;
                    return 0;
                }
                cout << n - i << endl;
                return 0;
            }

            if (a[j] == i)
            {
                k = j + 1;
                break;
            }
            if (j == n - 1 && a[j] != i)
            {
                cout << n - i + 1 << endl;
                return 0;
            }
        }
    }
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int l, r;
    cin >> l >> r;
    int m = 3000;
    if (r - l > 2021)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        for (int i = l; i < r; i++)
        {
            for (int j = i + 1; j <= r; j++)
            {
                int m1 = ((i % 2019) * (j % 2019)) % 2019;
                m = min(m, m1);
            }
        }
    }
    cout << m << endl;
}

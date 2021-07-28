#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> d(2000000);

    rep(i, n) cin >> a[i];
    int g = a[0];
    rep(i, n - 1)
    {
        g = gcd(g, a[i + 1]);
    }

    if (g != 1)
    {
        cout << "not coprime" << endl;
        return 0;
    }
    else
    {
        for (int i = 1000000; i >= 2; i--)
        {
            int tmp1 = i;
            int tmp2 = i;
            while (tmp2 <= 1000000)
            {
                d[tmp2] = tmp1;
                tmp2 += tmp1;
            }
        }
        set<int> s;
        rep(i, n)
        {
            int w = a[i];
            while (w > 1)
            {
                if (s.count(d[w]))
                {
                    cout << "setwise coprime" << endl;
                    return 0;
                }

                s.insert(d[w]);
                int tmp3 = w;

                while (w % d[tmp3] == 0)
                {
                    w /= d[w];
                }
            }
        }
    }
    cout << "pairwise coprime" << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    int a = 0, b = 0;
    int k;
    cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    rep(i, n)
    {
        cin >> p[i];
    }
    rep(i, n)
    {
        cin >> q[i];
    }

    for (int i = 0; i < n; i++)
    {
        int g = 0;
        k = 1;
        for (int j = 1; j < n - i; j++)
        {
            k *= j;
        }
        for (int l = i + 1; l < n; l++)
        {
            if (p[i] > p[l])
            {
                g++;
            }
        }

        a += k * g;
    }
    for (int i = 0; i < n; i++)
    {
        int g = 0;
        k = 1;
        for (int j = 1; j < n - i; j++)
        {
            k *= j;
        }
        for (int l = i + 1; l < n; l++)
        {
            if (q[i] > q[l])
            {
                g++;
            }
        }

        b += k * g;
    }
    int ans = abs(b - a);
    cout << ans << endl;
}

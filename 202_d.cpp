#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
std::vector<std::vector<long long>> comb(int n, int r)
{
    std::vector<std::vector<long long>> v(n + 1, std::vector<long long>(n + 1, 0));
    for (int i = 0; i < v.size(); i++)
    {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (int j = 1; j < v.size(); j++)
    {
        for (int k = 1; k < j; k++)
        {
            v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
        }
    }
    return v;
}

int main()
{

    ll a, b, k;
    cin >> a >> b >> k;
    string s = "";
    ll c = 1;
    ll d = 0;
    rep(q, int(a + b))
    {
        ll g = comb(a + b - c - d, b - d)[a + b - c - d][b - d];

        if (k > g)
        {
            if (b - d > 0)
            {
                s += 'b';
                k -= g;
                d++;
            }
            else
            {
                rep(w, a - c + 1) s += 'a';
                cout << s << endl;
                return 0;
            }
        }
        else
        {
            if (a - c >= 0)
            {
                s += 'a';
                c++;
            }
            else
            {
                rep(w, b - d) s += 'b';
                cout << s << endl;
                return 0;
            }
        }
    }
    cout << s << endl;
}

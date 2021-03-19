#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, q;

    string s;
    cin >> n >> q >> s;
    vector<int> l(q), r(q);
    rep(i, q)
    {
        cin >> l[i] >> r[i];
    }
    vector<int> sum(n, 0);

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'A' && s[i] == 'C')
        {
            sum[i] = sum[i - 1] + 1;
        }
        else
            sum[i] = sum[i - 1];
    }
    rep(i, q)
    {
        cout << sum[r[i] - 1] - sum[l[i] - 1] << endl;
    }
}

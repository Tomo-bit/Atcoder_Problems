#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> class1(n + 1);
    vector<int> class2(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int c, p;
        cin >> c >> p;
        if (c == 1)
        {
            class1[i] = class1[i - 1] + p;
            class2[i] = class2[i - 1];
        }
        else
        {
            class2[i] = class2[i - 1] + p;
            class1[i] = class1[i - 1];
        }
    }
    int q;
    cin >> q;
    vector<int> ls(q), rs(q);
    rep(i, q)
    {
        int a, b;
        cin >> a >> b;
        ls[i] = a;
        rs[i] = b;
    }
    rep(i, q)
    {
        int l = ls[i], r = rs[i];
        int ans1 = class1[r] - class1[l - 1];
        int ans2 = class2[r] - class2[l - 1];
        cout << ans1 << " " << ans2 << endl;
    }
}

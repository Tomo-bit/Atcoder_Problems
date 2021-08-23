#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> s;
    rep(i, n)
    {
        int a;
        cin >> a;
        for (int j = 2; j * j <= a; j++)
        {

            while (a % j == 0)
            {
                a /= j;
                s.insert(j);
            }
        }
        if (a != 1)
            s.insert(a);
    }
    //以上でaの素因数全てがsに格納された
    vector<bool> is(m + 100, true);
    for (int i : s)
    {
        for (int j = i; j <= m + 100; j += i)
        {
            is[j] = false;
        }
    }
    //以上でaの素因数全ての倍数がfalseとなった
    vector<int> ans;
    for (int i = 1; i <= m; i++)
    {
        if (is[i])
            ans.push_back(i);
    }
    cout << ans.size() << endl;
    for (int i : ans)
        cout << i << endl;
}

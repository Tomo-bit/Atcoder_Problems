#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    if (n == 0)
    {
        cout << x << endl;
        return 0;
    }
    vector<int> p(n);
    set<int> ps;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        ps.insert(p[i]);
    }
    int ans;
    int ans1;
    int ans2;
    int id1, id2;

    for (int i = 0; i < x + 1; i++)
    {
        if (!(ps.count(x - i)))
        {
            ans1 = x - i;
            id1 = i;
            break;
        }
    }
    for (int i = 0; i < *rbegin(ps) + 1; i++)
    {
        if (!(ps.count(x + i)))
        {
            ans2 = x + i;
            id2 = i;
            break;
        }
    }
    if (id1 > id2)
    {
        ans = ans2;
    }
    else
    {
        ans = ans1;
    }

    cout << ans << endl;
}

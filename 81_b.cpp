#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans;
    ans = 0;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    bool exist_odd = false;

    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (p[i] % 2 != 0)
            {
                cout << ans << endl;
                return 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            p[i] = p[i] / 2;
        }
        ans++;
    }
    cout << ans << endl;
}

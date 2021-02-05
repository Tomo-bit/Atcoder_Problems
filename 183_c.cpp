#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int t[8][8];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t[i][j];
        }
    }
    vector<int> p;
    for (int i = 1; i < n; i++)
    {
        p.push_back(i);
    }
    int ans = 0;
    do
    {
        int tot = t[0][p[0]];
        for (int i = 0; i < n - 2; i++)
        {
            tot += t[p[i]][p[i + 1]];
        }
        tot += t[p[n - 2]][0];
        if (tot == k)
        {
            ans++;
        }

    } while (next_permutation(p.begin(), p.end()));
    cout << ans << endl;
}

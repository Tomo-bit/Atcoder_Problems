#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int ans = 9999999999;
    int m = *max_element(x.begin(), x.end());
    int g = *min_element(x.begin(), x.end());
    for (int i = g; i < m + 1; i++)
    {
        int now = 0;
        for (int j = 0; j < n; j++)
        {
            now += (i - x[j]) * (i - x[j]);
        }
        ans = min(ans, now);
    }
    cout << ans << endl;
}

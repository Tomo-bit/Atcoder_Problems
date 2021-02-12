#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int now = 0, ansk = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 2; i < 1001; i++)
    {
        now = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i == 0)
            {
                now += 1;
            }
        }
        if (now > ansk)
        {
            ansk = now;
            ans = i;
        }
    }
    cout << ans << endl;
}

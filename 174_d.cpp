#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            r += 1;
        }
    }
    int ans = 0;
    int k = 0;
    while (r > 0)
    {
        if (s[k] == 'W')
        {
            r -= 1;
            ans += 1;
            k += 1;
        }
        else
        {
            r -= 1;
            k += 1;
        }
    }

    cout << ans << endl;
}

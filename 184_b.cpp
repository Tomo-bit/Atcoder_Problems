#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    string s;
    cin >> n >> x >> s;
    int ans = x;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            ans++;
        }
        else
        {
            if (ans == 0)
            {
                continue;
            }
            else
            {
                ans--;
            }
        }
    }
    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            if ((n - i) % j == 0)
            {
                ans += 1;
            }
        }
    }
    cout << ans << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k;
    int ans = 0;
    cin >> k;
    for (int a = 1; a <= k; a++)
    {
        for (int i = 1; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                int b = a / i;
                for (int j = i; j <= sqrt(b); j++)
                {
                    if (b % j == 0)

                    {
                        int c = b / j;
                        if (i == j && j == c)
                            ans++;
                        else if (i == j && j != c)
                            ans += 3;
                        else if (j == c && j != i)
                            ans += 3;
                        else if (i == c && j != c)
                            ans += 3;
                        else
                            ans += 6;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}

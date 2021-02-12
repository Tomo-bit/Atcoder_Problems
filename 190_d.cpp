#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    long long sq = sqrt(n), ans = 0;
    for (long long i = 1; i <= sq; i++)
    {
        if (n % i == 0)
        {
            ans += 2;
        }
    }
    if (sq * sq == n)
    {
        ans--;
    }
    cout << ans * 2 << endl;
}

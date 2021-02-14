#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long ans = 10000000000, d, e;
    cin >> n;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        d = 1;
        e = 1;
        if (n % i == 0)
        {
            while (true)
            {
                i /= 10;
                if (i > 0)
                {
                    d++;
                }
                else
                {
                    break;
                }
            }
            while (true)
            {
                long long k = n / i;
                k /= 10;
                if (k > 0)
                {
                    e++;
                }
                else
                {
                    break;
                }
            }
            long long digits = max(d, e);

            ans = min(ans, digits);
        }
    }
    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ans += (b - a + 1) * (b + a) / 2;
    }
    cout << ans << endl;
}

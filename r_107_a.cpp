#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a, b, c;
    cin >> a >> b >> c;
    unsigned long long aa = (a * (a + 1) / 2) % 998244353;
    unsigned long long bb = (b * (b + 1) / 2) % 998244353;
    unsigned long long cc = (c * (c + 1) / 2) % 998244353;
    unsigned long long ans = (aa * bb) % 998244353;
    ans = (ans * cc) % 998244353;
    cout << ans << endl;
}

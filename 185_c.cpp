#include <bits/stdc++.h>
using namespace std;

int main()
{
    __int128_t a = 1;
    __int128_t b = 1;
    int L;
    cin >> L;
    for (int i = 1; i < 12; i++)
    {
        a *= (L - i);
        b *= i;
    }
    long long ans = a / b;
    cout << ans << endl;
}

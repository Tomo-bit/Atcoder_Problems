#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a = 1, b = 1, c = 1, d = 1;
    for (long long i = 0; i < n; i++)
    {
        a *= 10;
        b *= 9;
        c *= 8;
    }
    for (int i = 0; i < 9; i++)
    {
        d *= 10;
    }
    d += 7;
    long long ans = (a - b - b + c) % d;
    cout << a << endl;
}
/*aの階乗の計算に難あり

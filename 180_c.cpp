#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    set<long long> s;
    for (long long x = 1; x * x <= n; x++)
    {
        if (n % x != 0)
            continue;
        s.insert(x);
        s.insert(n / x);
    }
    for (long long x : s)
        cout << x << endl;
}

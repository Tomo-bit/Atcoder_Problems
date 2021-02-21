#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int s, a[2010];
    int mod = 1000000007;
    cin >> s;
    a[0] = 1;
    a[1] = a[2] = 0;
    for (int i = 3; i <= s; i++)
    {
        a[i] = (a[i - 1] + a[i - 3]) % mod;
    }
    cout << a[s] << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = max(a + b, b + c);
    ans = max(ans, c + a);
    cout << ans << endl;
}

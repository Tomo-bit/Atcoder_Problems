#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int ans = 1000 - n % 1000;
    if (ans == 1000)
    {
        ans = 0;
    }
    cout << ans << endl;
}

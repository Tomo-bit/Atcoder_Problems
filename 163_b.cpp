#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    rep(i, m)
    {
        int a;
        cin >> a;
        sum += a;
    }
    if (sum > n)
    {
        cout << -1 << endl;
        return 0;
    }
    else
        cout << n - sum << endl;
}

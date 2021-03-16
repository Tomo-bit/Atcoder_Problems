#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> b(n + 1, 1);
    rep(i, m)
    {
        int a;
        cin >> a;
        b[a] = 0;
    }
    for (int i = 2; i <= n; i++)
    {
        if (b[i] == 0)
            continue;
        b[i] = b[i - 1] + b[i - 2];
        b[i] %= 1000000007;
    }
    cout << b[n] << endl;
}

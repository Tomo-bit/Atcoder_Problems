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
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.rbegin(), a.rend());
    if (a[m - 1] >= (sum + 4 * m - 1) / (4 * m))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}

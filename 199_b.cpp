#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    int x = *max_element(a.begin(), a.end());
    int y = *min_element(b.begin(), b.end());
    if (y < x)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << y - x + 1 << endl;
    }
}

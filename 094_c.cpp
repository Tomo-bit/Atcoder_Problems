#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n)
    {
        cin >> x[i];
    }
    y = x;
    sort(x.begin(), x.end());
    int a = x[n / 2 - 1];
    int b = x[n / 2];
    rep(i, n)
    {
        if (y[i] <= a)
            cout << b << endl;
        else if (y[i] >= b)
            cout << a << endl;
    }
}

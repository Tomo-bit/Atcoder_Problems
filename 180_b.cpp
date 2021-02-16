#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    cout << fixed << setprecision(15);
    int n;
    cin >> n;
    long long m = 0;
    long long u;
    int t = 0;
    int x;
    rep(i, n)
    {
        cin >> x;
        m += abs(x);
        u += (long long)x * x;
        t = max(t, abs(x));
    }
    double g = sqrt(u);
    cout << m << endl;
    cout << printf("%.10f", g) << endl;
    cout << t << endl;
}

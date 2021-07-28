#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    complex<double> s, t;
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    s = complex<double>(a, b);
    t = complex<double>(c, d);
    complex<double> o = (s + t) / double(2.0);
    double PI = acos(-1);
    double rad = 2 * PI / n;
    complex<double> r(cos(rad), sin(rad));
    complex<double> ans = o + (s - o) * r;
    cout << std::fixed << std::setprecision(15) << ans.real() << " " << ans.imag() << endl;
}

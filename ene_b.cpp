#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    double D, H;
    cin >> n;
    cin >> D >> H;
    double hight = 0;
    rep(i, n)
    {
        double d, h;
        cin >> d >> h;
        double s = h - (H - h) / (D - d) * d;
        hight = max(hight, s);
    }
    cout << std::fixed << std::setprecision(15) << hight << endl;
}

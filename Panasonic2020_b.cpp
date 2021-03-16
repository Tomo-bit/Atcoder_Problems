#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll h, w;
    cin >> h >> w;
    if (h == 1)
        cout << 1 << endl;
    else if (w == 1)
        cout << 1 << endl;
    else if (h % 2 == 0 || w % 2 == 0)
        cout << h * w / (ll)2 << endl;
    else
        cout << (h * w) / (ll)2 + (ll)1 << endl;
}

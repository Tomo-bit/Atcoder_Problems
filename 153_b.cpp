#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, n;
    cin >> h >> n;
    int p = 0;
    rep(i, n)
    {
        int a;
        cin >> a;
        p += a;
    }
    if (p >= h)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

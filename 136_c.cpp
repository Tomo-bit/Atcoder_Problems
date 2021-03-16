#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    int hmax = 0;
    cin >> n;
    rep(i, n)
    {
        int h;
        cin >> h;
        if (hmax - h >= 2)
        {
            cout << "No" << endl;
            return 0;
        }
        hmax = max(hmax, h);
    }
    cout << "Yes" << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, q = 0;
    cin >> n;
    rep(i, n)
    {
        int d1, d2;
        cin >> d1 >> d2;
        if (d1 == d2)
        {
            q++;
            if (q == 3)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
        else
        {
            q = 0;
        }
    }
    cout << "No" << endl;
}

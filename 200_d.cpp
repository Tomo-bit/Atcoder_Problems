#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<vector<int>> bk(200, vector<int>(0));
    int d = min(n, 8);
    rep(is, 1 << d)
    {
        int sum;
        vector<int> s;
        sum = 0;
        rep(i, d)
        {

            if (is >> i & 1)
            {
                s.push_back(i + 1);
                sum += a[i];
                sum %= 200;
            }
        }
        if (bk[sum].size() != 0)
        {
            cout << "Yes" << endl;
            cout << bk[sum].size();
            rep(i, int(bk[sum].size()))
            {
                cout << " " << bk[sum][i];
            }
            cout << "" << endl;
            cout << s.size();
            rep(i, int(s.size()))
            {
                cout << " " << s[i];
            }
            return 0;
        }
        else
            bk[sum] = s;
    }
    cout << "No" << endl;
}

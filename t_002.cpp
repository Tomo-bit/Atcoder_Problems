#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    vector<string> ans;

    cin >> n;
    if (n % 2 == 1)
    {
        return 0;
    }
    else
    {
        rep(is, 1 << n)
        {
            string s = "";
            bool ok = true;
            int cnt = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (is >> i & 1)
                {
                    s += ")";
                    cnt--;
                }
                else
                {
                    s += "(";
                    cnt++;
                }

                if (cnt < 0)
                {
                    ok = false;
                }
            }
            if (ok && cnt == 0)
            {
                ans.push_back(s);
            }
        }
        rep(i, ans.size())
        {
            cout << ans[i] << endl;
        }
    }
}

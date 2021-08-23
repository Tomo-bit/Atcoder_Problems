#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    string s;
    ll k;
    cin >> s >> k;
    sort(s.begin(), s.end());
    ll size = s.size();
    vector<int> d;
    k;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        int cnt = 0;
        int w = 1;
        for (int j = 1; j <= i; j++)
        {
            w *= j;
        }
        while (k >= 2 * w - 1)
        {
            k -= w;
            cnt++;
        }
        d.push_back(cnt);
    }
    vector<char> c;
    for (int i : d)
    {
        c.push_back(s[i]);
        s.erase(i, 1);
    }
    string ans = "";
    for (char q : c)
    {
        ans += q;
    }
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << ans << endl;
}

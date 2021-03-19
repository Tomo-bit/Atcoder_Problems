#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll sum = 0;
    for (int i = 0; i < (1 << n - 1); i++)
    {
        ll add = 0;
        int k = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (i & (1 << j))
            {
                string q = s.substr(k, j - k + 1);
                k = j + 1;
                ll w = stoll(q);
                add += w;
            }
        }
        string q = s.substr(k);
        ll w = stoll(q);
        add += w;

        sum += add;
    }
    cout << sum << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll base8_to_long(string n)
{
    ll res = 0;
    for (int i = 0; i < n.size(); i++)
    {
        res = res * 8 + int(n[i] - '0');
    }
    return res;
}

string long_to_base9(ll n)
{
    if (n == 0)
    {
        return "0";
    }
    string res;
    while (n > 0)
    {
        res = char(n % 9 + '0') + res;
        n /= 9;
    }
    return res;
}

int main()
{
    string n;
    ll k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        n = long_to_base9(base8_to_long(n));
        for (int j = 0; j < n.size(); j++)
        {
            if (n[j] == '8')
                n[j] = '5';
        }
    }
    cout << n << endl;
}

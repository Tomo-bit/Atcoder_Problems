#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

vector<int> toDigits(int n)
{
    vector<int> d;
    while (n)
    {
        d.push_back(n % 10);
        n /= 10;
    }
    return d;
}
int toInt(vector<int> d)
{
    int res = 0, x = 1;
    rep(i, d.size())
    {
        res += d[i] * x;
        x *= 10;
    }
    return res;
}
int g1(int n)
{
    auto d = toDigits(n);
    sort(d.begin(), d.end());
    return toInt(d);
}
int g2(int n)
{
    auto d = toDigits(n);
    sort(d.rbegin(), d.rend());
    return toInt(d);
}

int f(int n)
{
    return g1(n) - g2(n);
}

int main()
{
    int n, k;
    cin >> n >> k;
    rep(i, k) n = f(n);
    cout << n << endl;
}

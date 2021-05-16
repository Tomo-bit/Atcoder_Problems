#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string n;
    n = "1010";
    ll ans = 0;
    ll x = stoll(n);
    int size = n.size();
    if (size <= 3)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 4; i <= size - 1; i++)
    {
        if (4 <= i && i <= 6)
            ans += 1 * 9 * pow(10, i - 1);
        if (7 <= i && i <= 9)
            ans += 2 * 9 * pow(10, i - 1);
        if (10 <= i && i <= 12)
            ans += 3 * 9 * pow(10, i - 1);
        if (13 <= i && i <= 15)
            ans += 4 * 9 * pow(10, i - 1);
    }

    if (4 <= size && size <= 6)
        ans += 1 * (x - pow(10, size - 1) + 1);

    if (7 <= size && size <= 9)
        ans += 2 * (x - pow(10, size - 1) + 1);

    if (10 <= size && size <= 12)
        ans += 3 * (x - pow(10, size - 1) + 1);
    if (13 <= size && size <= 15)
        ans += 4 * (x - pow(10, size - 1) + 1);
    if (size == 16)
        ans += 5 * (x - pow(10, size - 1) + 1);
    cout << ans << endl;
}

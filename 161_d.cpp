#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k;
    cin >> k;
    queue<ll> a;
    for (int i = 1; i < 10; i++)
    {
        a.push(i);
    }

    for (int i = 1; i < k; i++)
    {
        ll x = a.front();
        a.pop();
        if (x % 10 != 0)
            a.push(10 * x + x % 10 - 1);
        a.push(10 * x + x % 10);
        if (x % 10 != 9)
            a.push(10 * x + x % 10 + 1);
    }
    cout << a.front() << endl;
}

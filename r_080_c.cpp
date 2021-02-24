#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, count = 0;
    cin >> n;
    rep(i, n)
    {
        int a;
        cin >> a;
        if (a % 4 == 0)
        {
            count += 2;
            continue;
        }
        if (a % 2 == 0)
        {
            count += 1;
        }
    }
    if (n % 2 == 0)
    {
        if (n <= count)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
    {
        if (n - 1 <= count)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

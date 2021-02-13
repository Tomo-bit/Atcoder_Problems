#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long b, c, ans;
    cin >> b >> c;
    if (c == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    if (b > 0)
    {
        if (c == 1)
        {
            cout << 2 << endl;
            return 0;
        }
        else if (2 * b <= c && b != 0)
        {
            ans = b * 2 + c - 1;
            cout << ans << endl;
            return 0;
        }
        else
        {
            ans = 3 + 2 * (c - 2);
            cout << ans << endl;
            return 0;
        }
    }
    if (b == 0)
    {
        ans = c;
        cout << ans << endl;
        return 0;
    }
    if (b < 0)
    {
        if (c <= 1 + 2 * (-b))
        {
            if (c == 1)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 2 * c - 1 << endl;
            }
        }
        else
        {
            cout << (-b) * 2 + 1 + c - 1 << endl;
        }
    }
}

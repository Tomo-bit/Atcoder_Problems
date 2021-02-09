#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int len = n.length();
    vector<int> a(len);
    vector<int> b(len);
    for (int i = 0; i < len; i++)
    {
        a[i] = n[i] - '0';
    }
    int r = 0;
    for (int i = 0; i < len; i++)
    {
        r += a[i] % 3;
        b[i] = a[i] % 3;
    }
    r %= 3;
    if (r == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int q = 0;
    if (r == 1)
    {
        for (int i = 0; i < len; i++)
        {
            if (b[i] == 1 && len > 1)
            {
                cout << 1 << endl;
                return 0;
            }
        }
        for (int i = 0; i < len; i++)
        {
            if (b[i] == 2 && len > 2)
            {
                q++;
            }
            if (q >= 2)
            {
                cout << 2 << endl;
                return 0;
            }
        }
    }
    int p = 0;
    if (r == 2)
    {
        for (int i = 0; i < len; i++)
        {
            if (b[i] == 2 && len > 1)
            {
                cout << 1 << endl;
                return 0;
            }
        }
        for (int i = 0; i < len; i++)
        {
            {
                if (b[i] == 1 && len > 2)
                {
                    p++;
                }
                if (p >= 2)
                {
                    cout << 2 << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
}

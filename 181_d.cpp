#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = s.length();
    vector<int> b(a), c(a);
    for (int i = 0; i < a; i++)
    {
        b[i] = s[i] - '0';
    }
    bool r;
    if (a == 1)
    {
        if (b[0] == 8)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (a == 2)
    {
        for (int i = 16; i <= 96; i += 8)
        {
            c = b;
            int l = i;
            int u = 0;
            int w = 0;
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < a - u; k++)
                {
                    r = true;
                    if (c[k] == l % 10)
                    {
                        c.erase(c.begin() + k);
                        w += 1;
                        u += 1;
                        r = false;
                        break;
                    }
                }
                if (r)
                {
                    break;
                }
                l /= 10;
            }
            if (w == 2)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    if (a >= 3)
    {
        for (int i = 104; i <= 992; i += 8)
        {
            c = b;

            int l = i;
            int u = 0;
            int w = 0;
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < a - u; k++)
                {
                    r = true;
                    if (c[k] == l % 10)
                    {
                        c.erase(c.begin() + k);
                        w += 1;
                        u += 1;
                        r = false;
                        break;
                    }
                }
                if (r)
                {
                    break;
                }
                l /= 10;
            }
            if (w == 3)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}

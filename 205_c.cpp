#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << "=" << endl;
        return 0;
    }
    else if (c % 2 == 0)
    {
        if (abs(a) < abs(b))
            cout << "<" << endl;
        else if (abs(a) > abs(b))
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }
    else
    {
        if (a >= 0 && b >= 0)
        {
            if (a > b)
                cout << ">" << endl;
            else if (a < b)
                cout << "<" << endl;
        }
        else if (a < 0 && b >= 0)
        {
            cout << "<" << endl;
        }
        else if (a >= 0 && b < 0)
        {
            cout << ">" << endl;
        }
        else if (a < 0 && b < 0)
        {
            if (a < b)

                cout << "<" << endl;

            if (a > b)
                cout << ">" << endl;
        }
    }
}

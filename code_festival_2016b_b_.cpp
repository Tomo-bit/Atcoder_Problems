#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, e = 0, f = 0;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            if (e < a + b)
            {
                cout << "Yes" << endl;
                e++;
                continue;
            }
            else
            {
                cout << "No" << endl;
                continue;
            }
        }
        if (s[i] == 'b')
        {
            if (e < a + b && f < b)
            {
                cout << "Yes" << endl;
                e++;
                f++;

                continue;
            }
            else
            {
                cout << "No" << endl;
                continue;
            }
            f++;
        }
        if (s[i] == 'c')
        {
            cout << "No" << endl;
            continue;
        }
    }
}

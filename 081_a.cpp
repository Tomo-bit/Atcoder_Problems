#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int f;
    f = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == '1')
        {
            f += 1;
        }
    }
    cout << f << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (true)
    {
        bool ans = true;
        for (int j = 2; j < x; j++)
        {

            if (x % j == 0)
            {
                x++;
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << x << endl;
            break;
        }
    }
}

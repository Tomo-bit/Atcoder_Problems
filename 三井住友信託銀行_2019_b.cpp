#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 46300; i++)
    {
        if (n <= i * 1.08 && i * 1.08 < n + 1)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
}

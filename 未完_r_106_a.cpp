#include <bits/stdc++.h>
using namespace std;

main()
{
    long long n;
    cin >> n;
    for (int i = 0; i < 38; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (std::pow(3, i) + std::pow(5, j) == n)
            {
                cout << i << j << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}

/*未正答  powの精度の悪さが原因かも

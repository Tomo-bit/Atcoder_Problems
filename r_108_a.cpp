#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s, p;
    cin >> s >> p;
    for (int i = 1; i <= sqrt(p); i++)
    {
        if (p % i == 0 && i + p / i == s)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    if (n % 100 == 0)
    {
        cout << n / 100 << endl;
        return 0;
    }
    cout << n / 100 + 1 << endl;
}

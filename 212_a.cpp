#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    int a, b;
    cin >> a >> b;
    if (0 < a && b == 0)
        cout << "Gold" << endl;
    else if (a == 0 && 0 < b)
        cout << "Silver" << endl;
    else
        cout << "Alloy" << endl;
}

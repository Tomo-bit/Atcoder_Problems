#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    if (6 * a >= b && b >= a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

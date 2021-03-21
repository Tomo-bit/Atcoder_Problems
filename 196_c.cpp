#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    int i = 1;
    while (true)
    {
        if (stoll(to_string(i) + to_string(i)) > n)
        {
            cout << i - 1 << endl;
            return 0;
        }
        i++;
    }
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    set<ll> s;
    rep(i, n)
    {
        int a;
        cin >> a;
        if (s.count(a))
        {
            cout << "NO" << endl;
            return 0;
        }

        s.insert(a);
    }
    cout << "YES" << endl;
}

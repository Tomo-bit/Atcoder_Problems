#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    deque<int> d;
    int q;
    cin >> q;
    rep(i, q)
    {
        int t;
        cin >> t;
        int x;
        cin >> x;
        if (t == 1)
            d.push_front(x);
        else if (t == 2)
            d.push_back(x);
        else
            cout << d[x - 1] << endl;
    }
}

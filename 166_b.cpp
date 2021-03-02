#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, k;
    cin >> n >> k;
    set<int> s;
    rep(i, k)
    {
        int d;
        cin >> d;
        rep(j, d)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
    }
    cout << n - s.size() << endl;
}

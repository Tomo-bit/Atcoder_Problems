#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    int ans = 0;
    rep(i, n)
    {
        int a;
        cin >> a;
        if (s.count(a))
            ans++;
        s.insert(a);
    }
    cout << ans << endl;
}

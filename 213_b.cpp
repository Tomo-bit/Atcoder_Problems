#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    rep(i, n)
    {
        int q;
        cin >> q;
        a[i] = q;
        mp[q] = i + 1;
    }
    sort(a.rbegin(), a.rend());
    cout << mp[a[1]] << endl;
}

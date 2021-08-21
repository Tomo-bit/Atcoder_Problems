#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    set<int> sa, sb;
    vector<int> a(n), b(n);
    map<int, int> mpa, mpb;
    rep(i, n)
    {
        cin >> a[i] >> b[i];
    }
    rep(i, n)
    {
        sa.insert(a[i]);
        sb.insert(b[i]);
    }
    int cnt = 1;
    for (int i : sa)
    {
        mpa[i] = cnt;
        cnt++;
    }
    cnt = 1;
    for (int i : sb)
    {
        mpb[i] = cnt;
        cnt++;
    }
    rep(i, n)
    {
        cout << mpa[a[i]] << " " << mpb[b[i]] << endl;
    }
}

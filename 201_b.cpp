#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> pairs(n);
    rep(i, n)
    {
        string s;
        int a;
        cin >> s >> a;
        pairs[i].first = a;
        pairs[i].second = s;
    }
    sort(pairs.rbegin(), pairs.rend());
    cout << pairs[1].second << endl;
}

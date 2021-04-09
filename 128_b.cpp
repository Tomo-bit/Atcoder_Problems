#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<pair<pair<string, int>, int>> w(n);
    rep(i, n)
    {
        string s;
        int p;
        cin >> s >> p;
        w[i].first.first = s;
        w[i].first.second = -p;
        w[i].second = i + 1;
    }
    sort(w.begin(), w.end());
    rep(i, n) cout << w[i].second << endl;
}

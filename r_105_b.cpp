#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    set<int> a;
    cin >> n;
    int b;
    rep(i, n)
    {
        cin >> b;
        a.insert(b);
    }
    while (a.size() != 1)
    {
        a.insert(*rbegin(a) - *begin(a));
        a.erase(*rbegin(a));
    }
    cout << *begin(a) << endl;
}

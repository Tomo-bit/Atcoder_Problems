#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    set<string> z;
    rep(i, n)
    {
        string s;
        cin >> s;
        if (!z.count(s))
        {
            cout << i + 1 << endl;
            z.insert(s);
        }
    }
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    set<string> q;
    int n;
    cin >> n;
    vector<string> v(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    q.insert(v[0]);
    for (int i = 1; i < n; i++)
    {

        if (q.count(v[i]) || v[i][0] != v[i - 1][v[i - 1].size() - 1])
        {
            if (i % 2 == 0)
            {
                cout << "LOSE" << endl;
                return 0;
            }
            else
            {
                cout << "WIN" << endl;
                return 0;
            }
        }
        q.insert(v[i]);
    }
    cout << "DRAW" << endl;
}

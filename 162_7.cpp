#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string n;
    cin >> n;
    rep(i, n.size())
    {
        if (n[i] == '7')
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}

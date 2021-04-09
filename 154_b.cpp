#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string k = "x";
    rep(i, n - 1)
    {
        k += "x";
    }
    cout << k << endl;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    int k;
    cin >> k >> s;
    string sbs;
    sbs = s.substr(0, k);
    if (s.length() <= k)
        cout << s << endl;
    else
        cout << sbs << "..." << endl;
}

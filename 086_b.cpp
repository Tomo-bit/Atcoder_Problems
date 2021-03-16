#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a;
    string b;
    cin >> a >> b;
    int bb = stoi(b);
    int x = pow(10, b.size()) * a + bb;

    if (x % (int)sqrt(x) == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

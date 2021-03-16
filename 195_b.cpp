#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b, w;
    cin >> a >> b >> w;
    int max = w * 1000 / a;
    int min = (w * 1000 + b - 1) / b;
    if (max < min)
    {
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }
    cout << min << " " << max << endl;
}

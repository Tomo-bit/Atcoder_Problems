#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, k, cnt;
    cin >> n >> k;
    cnt = 0;
    while (n >= 1)
    {
        n /= k;
        cnt++;
    }
    cout << cnt << endl;
}

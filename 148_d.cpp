#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    queue<int> a;
    rep(i, n)
    {
        int d;
        cin >> d;
        a.push(d);
    }
    int k = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        while (!a.empty())
        {
            if (a.front() == i)
            {
                a.pop();
                cnt++;
                break;
            }
            else
                a.pop();
        }
    }
    if (n - cnt == n)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << n - cnt << endl;
}

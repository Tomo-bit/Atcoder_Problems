#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;

    int a, b;
    int count_1 = 0, count_n = 0;
    int count = 0;
    vector<pair<int, int>> pairs(m);
    rep(i, m)
    {
        cin >> a >> b;
        if (a == 1)
        {
            pairs[count].first = a;
            pairs[count].second = b;
            count_1++;
            count++;
        }
        if (b == n)
        {
            pairs[count].first = a;
            pairs[count].second = b;
            count_n++;
            count++;
        }
    }
    sort(pairs.rbegin(), pairs.rend());

    if (count_1 < 1 || count_n < 1)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    else
    {
        for (int i = count - 1; i >= count - count_1; i--)
        {
            for (int j = count - count_1 - 1; j >= 0; j--)
            {
                if (pairs[i].second == pairs[j].first)
                {
                    cout << "POSSIBLE" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

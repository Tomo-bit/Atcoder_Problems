#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c, a, b, d;
    cin >> n >> c;
    long long bmax = 0;
    vector<vector<long long>> data(n, vector<long long>(3));

    for (int i = 0; i < n; i++)
    {
        cin >> data.at(i).at(0) >> data.at(i).at(1) >> data.at(i).at(2);
    }
    for (int i = 0; i < n; i++)
    {
        bmax = max(bmax, data.at(i).at(1));
    }
    vector<long long> v(bmax);
    for (int i = 0; i < n; i++)
    {
        v[data.at(i).at(0) - 1] += data.at(i).at(2);
        v[data.at(i).at(1)] -= data.at(i).at(2);
    }
    long long ans = 0;
    long long w = 0;
    for (int i = 0; i < bmax; i++)
    {
        w += v[i];
        if (w > c)
        {
            ans += c;
            continue;
        }
        ans += w;
    }
    cout << ans << endl;
}

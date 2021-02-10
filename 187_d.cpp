#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<long long>> d(n, vector<long long>(2));
    vector<long long> e(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> d.at(i).at(j);
        }
    }
    long long aokimax = 0;
    for (int i = 0; i < n; i++)
    {
        aokimax += d.at(i).at(0);
    }

    for (int i = 0; i < n; i++)
    {
        e[i] = d.at(i).at(0) * 2 + d.at(i).at(1);
    }
    sort(e.begin(), e.end());
    int count = 1;

    long long takahashi = 0;
    for (int i = n - 1; i > -1; i--)
    {
        takahashi += e[i];
        if (takahashi > aokimax)
        {
            cout << count << endl;
            return 0;
        }
        count++;
    }
}

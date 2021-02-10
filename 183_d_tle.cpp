#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<vector<int>> d(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> d.at(i).at(j);
        }
    }
    long long now;
    for (int i = 0; i <= 2 * 100000; i++)
    {
        now = 0;
        for (int j = 0; j < n; j++)
        {
            if (d.at(j).at(0) <= i && i < d.at(j).at(1))
            {
                now += d.at(j).at(2);
            }
        }
        if (now > w)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}

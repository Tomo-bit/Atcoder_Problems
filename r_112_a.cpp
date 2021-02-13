#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    unsigned long long ans;
    vector<vector<unsigned long long>> d(t, vector<unsigned long long>(2));
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> d.at(i).at(j);
        }
    }
    for (int i = 0; i < t; i++)
    {

        if (d.at(i).at(1) == d.at(i).at(0) && d.at(i).at(0) != 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (d.at(i).at(1) == d.at(i).at(0) && d.at(i).at(0) == 0)
        {
            cout << 1 << endl;
            continue;
        }
        if (d.at(i).at(1) < d.at(i).at(0) * 2)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            ans = ((d.at(i).at(1) - (d.at(i).at(0) * 2) + 1) * (d.at(i).at(1) - (2 * d.at(i).at(0)) + 1 + 1)) / 2;
            cout << ans << endl;
            continue;
        }
    }
}

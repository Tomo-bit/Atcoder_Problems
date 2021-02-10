#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<vector<int>> d(n, vector<int>(3));
    vector<long long> p(2 * 100000);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> d.at(i).at(j);
        }
    }
    for (int j = 0; j < n; j++)
    {
        int i = 0;
        while ((d.at(j).at(0) + i) < d.at(j).at(1))
        {
            p[d.at(j).at(0) + i] += d.at(j).at(2);
            i++;
        }
    }
    if (*max_element(p.begin(), p.end()) <= w)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

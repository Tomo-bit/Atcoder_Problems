#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<double>> xy(n, vector<double>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> xy.at(i).at(j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (xy.at(i).at(0) == xy.at(j).at(0) || xy.at(i).at(0) == xy.at(k).at(0))
                {
                    if (xy.at(i).at(0) == xy.at(j).at(0) && xy.at(i).at(0) == xy.at(k).at(0))
                    {
                        if (xy.at(i).at(1) != xy.at(j).at(1) && xy.at(j).at(1) != xy.at(k).at(1) && xy.at(k).at(1) != xy.at(i).at(1))
                        {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
                else if ((xy.at(i).at(1) - xy.at(j).at(1)) / (xy.at(i).at(0) - xy.at(j).at(0)) == (xy.at(i).at(1) - xy.at(k).at(1)) / (xy.at(i).at(0) - xy.at(k).at(0)))
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}

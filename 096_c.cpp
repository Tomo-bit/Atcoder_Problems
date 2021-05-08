#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> data(h + 2, vector<char>(w + 2));
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            cin >> data[i][j];
        }
    }
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            if (data[i][j] == '#')
            {
                if (data[i][j - 1] == '.' && data[i][j + 1] == '.' && data[i + 1][j] == '.' && data[i - 1][j] == '.')
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}

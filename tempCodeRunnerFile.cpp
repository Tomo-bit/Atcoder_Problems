#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> data(n, vector<int>(3));
    vector<vector<int>> shape(n, vector<int>(4));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> data.at(i).at(j);
        }
    }
    int x_1, y_1, x_2, y_2;
    int xn_r, xn_l, yn_u, yn_l, xn_rd, xn_ld, yn_ud, yn_ld;
    rep(i, n)
    {
        xn_r = data[i][0]+1;
        xn_l = data[i][0];
        yn_u = data[i][1]+1;
        yn_l = data[i][1];
        if (xn_l < 0)
            xn_l = 0;
        if (yn_l < 0)
            y_1 = 0;
        if (xn_r> 10000)
            xn_r = 10000;
        if (yn_u > 10000)
            yn_u = 10000;

        shape[i][0] = xn_l;
        shape[i][1] = yn_l;
        shape[i][2] = xn_r;
        shape[i][3] = yn_u;
    }

rep(i, n)
    {while ((shape[i][2] - shape[i][0]) * (shape[i][3] - shape[i][1]) < data[i][2])
            {
                int cnt = 0;

                shape[i][0] -= 1;
                rep(j, n)
                {
                    if (j == i)
                        continue;
                    if (shape[i][0] < 0)
                    {
                        cnt++;
                        shape[i][0] = 0;
                        break;
                    }
                    if ((shape[j][0] < shape[i][0] && shape[i][0] < shape[j][2] && shape[j][1] < shape[i][1] && shape[i][1] < shape[j][3]) ||
                        (shape[j][0] < shape[i][0] && shape[i][0] < shape[j][2] && shape[j][1] < shape[i][3] && shape[i][3] < shape[j][3]) ||
                        (shape[j][0] < shape[i][0] && shape[i][0] < shape[j][2] && shape[j][1] < shape[i][1] && shape[i][3] < shape[j][3]))
                    {
                        shape[i][0] += 1;
                        cnt++;
                        break;
                    }
                }

                shape[i][1] -= 1;
                rep(j, n)
                {
                    if (j == i)
                        continue;
                    if (shape[i][1] < 0)
                    {
                        cnt++;
                        shape[i][1] = 0;
                        break;
                    }
                    if ((shape[j][0] < shape[i][0] && shape[i][0] < shape[j][2] && shape[j][1] < shape[i][1] && shape[i][1] < shape[j][3]) ||
                        (shape[j][0] < shape[i][2] && shape[i][2] < shape[j][2] && shape[j][1] < shape[i][1] && shape[i][1] < shape[j][3]) ||
                        (shape[j][1] < shape[i][1] && shape[i][1] < shape[j][3] && shape[j][0] < shape[i][0] && shape[i][2] < shape[j][2]))
                    {
                        shape[i][1] += 1;
                        cnt++;
                        break;
                    }
                }

                shape[i][2] += 1;
                rep(j, n)
                {
                    if (j == i)
                        continue;
                    if (shape[i][2] > 10000)
                    {
                        cnt++;
                        shape[i][2] = 10000;
                        break;
                    }
                    if ((shape[j][0] < shape[i][2] && shape[i][2] < shape[j][2] && shape[j][1] < shape[i][1] && shape[i][1] < shape[j][3]) ||
                        (shape[j][0] < shape[i][2] && shape[i][2] < shape[j][2] && shape[j][1] < shape[i][3] && shape[i][3] < shape[j][3]) ||
                        (shape[j][0] < shape[i][2] && shape[i][2] < shape[j][2] && shape[j][1] < shape[i][1] && shape[i][3] < shape[j][3]))
                    {
                        shape[i][2] -= 1;
                        cnt++;
                        break;
                    }
                }

                shape[i][3] += 1;
                rep(j, n)
                {
                    if (j == i)
                        continue;
                    if (shape[i][3] > 10000)
                    {
                        cnt++;
                        shape[i][3] = 10000;
                        break;
                    }
                    if ((shape[j][0] < shape[i][0] && shape[i][0] < shape[j][2] && shape[j][1] < shape[i][3] && shape[i][3] < shape[j][3]) ||
                        (shape[j][0] < shape[i][2] && shape[i][2] < shape[j][2] && shape[j][1] < shape[i][3] && shape[i][3] < shape[j][3]) ||
                        (shape[j][1] < shape[i][3] && shape[i][3] < shape[j][3] && shape[j][0] < shape[i][0] && shape[i][2] < shape[j][2]))
                    {
                        shape[i][3] -= 1;
                        cnt++;
                        break;
                    }
                }

                if (shape[i][0] < 0)
                    shape[i][0] = 0;
                if (shape[i][1] < 0)
                    shape[i][1] = 0;
                if (shape[i][2] > 10000)
                    shape[i][2] = 10000;
                if (shape[i][3] > 10000)
                    shape[i][3] = 10000;
                if (cnt == 4)
                    break;
            }
        
    }

    rep(j, n)
    {
        cout << shape[j][0] << " " << shape[j][1] << " " << shape[j][2] << " " << shape[j][3] << endl;
    }
}

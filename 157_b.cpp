#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    vector<vector<int>> data(3, vector<int>(3));
    vector<vector<int>> d(3, vector<int>(3, -1));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> data.at(i).at(j);
        }
    }
    int n;
    cin >> n;
    rep(i, n)
    {
        int b;
        cin >> b;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (data.at(j).at(k) == b)
                    d.at(j).at(k) = 1;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int cnt1 = 0;
        int cnt2 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (d.at(i).at(j) == 1)
            {
                cnt1++;
            }
        }
        for (int j = 0; j < 3; j++)
        {
            if (d.at(j).at(i) == 1)
            {
                cnt2++;
            }
        }
        if (cnt1 == 3 || cnt2 == 3)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < 3; i++)
    {

        if (d.at(i).at(i) == 1)

            cnt1++;
    }
    if (cnt1 == 3)
    {
        cout << "Yes" << endl;
        return 0;
    }
    cnt1 = 0;
    for (int i = 0; i < 3; i++)
    {

        if (d.at(i).at(2 - i) == 1)

            cnt1++;
    }
    if (cnt1 == 3)
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}

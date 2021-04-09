#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int h;
    cin >> h;
    int w;
    cin >> w;
    vector<string> a(h);
    for (int i = 0; i < h; i++)
    {
        cin >> a[i];
    }

    vector<bool> row(h, false);
    vector<bool> col(w, false);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (a[i][j] == '#')
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < h; i++)
    {
        if (row[i])
        {
            for (int j = 0; j < w; j++)
            {
                if (col[j])
                {
                    cout << a[i][j];
                }
            }
            cout << endl;
        }
    }
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    string s;
    cin >> n;
    cin >> s;
    cin >> q;
    bool rev = false;
    vector<vector<int>> data(q, vector<int>(3));
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> data.at(i).at(j);
        }
    }
    rep(i, q)
    {
        int t, a, b;
        t = data[i][0];
        a = data[i][1];
        b = data[i][2];
        if (t == 1)
        {
            if (rev)
            {
                if (a <= n)
                    a += n;
                else
                    a -= n;
                if (b <= n)
                    b += n;

                else
                    b -= n;
                string x = s.substr(a - 1, 1), y = s.substr(b - 1, 1);
                s.replace(a - 1, 1, y);
                s.replace(b - 1, 1, x);
            }
            else
            {
                string x = s.substr(a - 1, 1), y = s.substr(b - 1, 1);
                s.replace(a - 1, 1, y);
                s.replace(b - 1, 1, x);
            }
        }
        else
        {
            if (rev)
                rev = false;
            else
                rev = true;
        }
    }
    if (rev)
    {
        string x = s.substr(0, n), y = s.substr(n, 2 * n - 1);
        s = y + x;
        cout << s << endl;
    }
    else
        cout << s << endl;
}

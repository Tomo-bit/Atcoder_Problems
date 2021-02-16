#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main()
{
    int n;
    double sum = 0;
    cin >> n;
    vector<vector<double>> data(n, vector<double>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> data.at(i).at(j);
        }
    }
    vector<int> p(n);
    rep(i, n)
    {
        p[i] = i;
    }
    int h = 0;

    do
    {
        rep(i, n - 1)
        {
            sum += sqrt((data.at(p[i]).at(0) - data.at(p[i + 1]).at(0)) * (data.at(p[i]).at(0) - data.at(p[i + 1]).at(0)) + (data.at(p[i]).at(1) - data.at(p[i + 1]).at(1)) * (data.at(p[i]).at(1) - data.at(p[i + 1]).at(1)));
        }
        h++;
    } while (next_permutation(p.begin(), p.end()));
    cout << fixed << setprecision(10);
    cout << sum / h << endl;
}

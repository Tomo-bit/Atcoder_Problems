#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<long long> d(200005);
    for (int i = 0; i < n; i++)
    {
        int s, t, p;
        cin >> s >> t >> p;
        d[s] += p;
        d[t] -= p;
    }
    for (int i = 0; i < 200004; i++)
    {
        d[i + 1] += d[i];
    }
    for (int i = 0; i < 200005; i++)
    {
        if (d[i] > w)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}

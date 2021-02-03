#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            double katamuki = (double)(y[j] - y[i]) / (x[j] - x[i]);
            if (katamuki >= -1 && katamuki <= 1)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}


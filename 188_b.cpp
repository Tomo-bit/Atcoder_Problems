#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int g = 0;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        g += a[i] * b[i];
    }
    if (g == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    long long t = 1;
    long long u = 1;
    for (int i = 0; i < n; i++)
    {
        u *= 2;
        if (s[i] == "AND")
        {
            t = t;
        }
        else
        {
            t = t + u;
        }
    }

    cout << t << endl;
}

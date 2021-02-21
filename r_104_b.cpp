#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, ans = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        int a = 0, t = 0, g = 0, c = 0;

        for (int j = i; j < n; j++)
        {
            if (s[j] == 'A')
                a++;
            if (s[j] == 'T')
                t++;
            if (s[j] == 'G')
                g++;
            if (s[j] == 'C')
                c++;

            if (a == t && g == c)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int max = *max_element(s.begin(), s.end());
    int diff = max;
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        if (max % 2 == 0 && s[i] != max)
        {
            diff = min(diff, abs(max / 2 - s[i]));
            if (diff == abs(max / 2 - s[i]))
            {
                e = s[i];
            }
        }
        if (max % 2 == 1 && s[i] != max)
        {
            diff = min(diff, abs(max / 2 - s[i]));
            if (diff == abs(max / 2 - s[i]))
            {
                e = s[i];
            }
            diff = min(diff, abs(max / 2 + 1 - s[i]));
            if (diff == abs(max / 2 + 1 - s[i]))
            {
                e = s[i];
            }
        }
    }
    cout << max << " " << e << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int l = 0; l < n; l++)
    {
        int m = a[l];
        for (int r = l; r < n; r++)
        {
            int now = 0;
            m = min(m, a[r]);
            now = m * (r - l + 1);
            ans = max(ans, now);
        }
    }
    cout << ans << endl;
}
/*       for (int r = l; r < n; r++)
        {
            int now = 0;
            int m = *min_element(a.begin() + l, a.begin() + r +1);
            now = m * (r - l + 1);
            ans = max(ans, now);
        }
        だとTLEになる。おそらくminの計算が多いから
*/

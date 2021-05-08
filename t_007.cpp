#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    int ans = 0;
    vector<int> bs(q);
    rep(i, q)
    {
        cin >> bs[i];
    }
    rep(i, q)
    {
        int b;
        b = bs[i];
        int left = 0;
        int right = n - 1;
        while (right - left > 1)
        {
            int mid = left + (right - left) / 2;
            if (a[mid] > b)
                right = mid;
            else
                left = mid;
        }
        if (abs(b - a[left]) >= abs(a[right] - b))
        {
            cout << abs(a[right] - b) << endl;
        }
        else
        {
            cout << abs(b - a[left]) << endl;
        }
    }
}

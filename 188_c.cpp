
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 1;
    int l;

    for (int i = 0; i < n; i++)
    {
        k *= 2;
    }
    l = k / 2;
    vector<int> a(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        mp[a[i]] = i + 1;
    }
    int b = *max_element(a.begin(), a.begin() + l);
    int c = *max_element(a.begin() + l, a.end());
    int ans = min(b, c);
    cout << mp[ans] << endl;
}

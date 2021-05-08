#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    map<int, int> mp;
    int left = 0;
    int right = 0;
    int num = 0;
    while (right < n)
    {

        mp[a[right]]++;
        num++;
        if (int(mp.size()) > k)
        {
            mp.erase(a[right]);
            num--;
            right--;
            ans = max(ans, num);
            mp[a[left]]--;
            num--;
            if (mp[a[left]] <= 0)
                mp.erase(a[left]);
            left++;
        }
        ans = max(ans, num);
        right++;
    }
    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long ans=0;
    cin >> n;
    int m=0;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        m = max(m,a[i]);
        ans += m-a[i];
}
cout << ans << endl;}

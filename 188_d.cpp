#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long C;
    cin >> n >> C;
    map<int, long long> events;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        events[a] += c;
        events[b + 1] -= c;
    }
    long long ans = 0;
    long long s = 0;
    int pre = 0;
    for (auto event : events)
    {
        ans += min(C, s) * (event.first - pre);
        s += event.second;
        pre = event.first;
    }
    cout << ans << endl;
}

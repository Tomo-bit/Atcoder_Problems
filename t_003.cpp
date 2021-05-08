#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> tree(n + 1);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    vector<int> dist(n + 1, -1);
    queue<int> que;
    dist[1] = 0;
    que.push(1);
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for (int nv : tree[v])
        {
            if (dist[nv] != -1)
                continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    auto maxir = max_element(dist.begin(), dist.end());
    int maxid = distance(dist.begin(), maxir);

    vector<int> dist1(n + 1, -1);
    queue<int> que1;
    dist1[maxid] = 0;
    que1.push(maxid);
    while (!que1.empty())
    {
        int v = que1.front();
        que1.pop();
        for (int nv : tree[v])
        {
            if (dist1[nv] != -1)
                continue;
            dist1[nv] = dist1[v] + 1;
            que1.push(nv);
        }
    }
    int maxd = *max_element(dist1.begin(), dist1.end());

    cout << maxd + 1 << endl;
}

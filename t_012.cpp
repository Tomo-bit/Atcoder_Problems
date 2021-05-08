#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

class UnionFind
{
public:
    vector<int> par;
    void init(int sz)
    {
        par.resize(sz, -1);
    }
    int root(int pos)
    {
        if (par[pos] == -1)
            return pos;
        par[pos] = root(par[pos]);
        return par[pos];
    }
    void unite(int u, int v)
    {
        u = root(u);
        v = root(v);
        if (u == v)
            return;
        par[u] = v;
    }
    bool same(int u, int v)
    {
        if (root(u) == root(v))
            return true;
        return false;
    }
};

int h, w, q;
UnionFind UF;
bool used[2009][2009];

void query1(int px, int py)
{
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    rep(i, 4)
    {
        int sx = px + dx[i], sy = py + dy[i];
        int hash1 = (px - 1) * w + (py - 1);
        int hash2 = (sx - 1) * w + (sy - 1);
        UF.unite(hash1, hash2);
    }
    used[px][py] = true;
}

bool query2(int px, int py, int qx, int qy)
{
    if (used[px][py] == false || used[qx][qy] == false)
    {
        return false;
    }
    int hash1 = (px - 1) * w + (py - 1);
    int hash2 = (qx - 1) * w + (qy - 1);
    if (UF.same(hash1, hash2) == true)
        return true;
    else
        return false;
}

int main()
{
    cin >> h >> w >> q;
    vector<vector<int>> data(q, vector<int>(5));
    rep(i, q)
    {
        int a;
        cin >> a;
        data[i][0] = a;
        if (a == 1)
        {
            rep(j, 2)
            {
                int b;
                cin >> b;
                data[i][j + 1] = b;
            }
        }
        if (a == 2)
        {
            rep(j, 4)
            {
                int b;
                cin >> b;
                data[i][j + 1] = b;
            }
        }
    }

    UF.init(h * w);
    vector<string> ans;
    rep(i, q)
    {
        if (data[i][0] == 1)
        {
            query1(data[i][1], data[i][2]);
        }
        if (data[i][0] == 2)
        {
            bool answer = query2(data[i][1], data[i][2], data[i][3], data[i][4]);
            if (answer)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}

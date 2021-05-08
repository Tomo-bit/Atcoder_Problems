#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int answer = (1 << 30);
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    vector<vector<bool>> kenaku(n + 1, vector<bool>(n + 1, false));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        kenaku[x][y] = true;
        kenaku[y][x] = true;
    }
    vector<int> vec;
    for (int i = 1; i <= n; i++)
        vec.push_back(i);
    do
    {
        bool flag = true;
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (kenaku[vec[i]][vec[i + 1]] == true)
                flag = false;
        }
        for (int i = 0; i < n; i++)
            sum += a[vec[i]][i + 1];
        if (flag == true)
            answer = min(answer, sum);
    } while (next_permutation(vec.begin(), vec.end()));
    if (answer == (1 << 30))
        answer = -1;
    cout << answer << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> V(N), P(N);
    double alc = 0;
    for (int i = 0; i < N;i++)
    {
        cin >> V[i]>>P[i];
        alc += V[i]*P[i];
        if (alc>X*100)
        {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
/*
割る100をすると小数点の計算になり誤差が生じる(実際、
通らない例がある)ので、100倍して、整数で実行している。
*/


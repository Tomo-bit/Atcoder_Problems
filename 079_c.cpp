#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> b(4);
    for (int i = 3; i > -1; i--)
    {
        b[i] = (a % 10);
        a /= 10;
        /*+-で場合わけして、8つのif文を書けば良い*/
    }
}

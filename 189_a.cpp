#include <bits/stdc++.h>
using namespace std;

int main()
{
    string abc;
    cin >> abc;
    if (abc[0] == abc[1] && abc[1] == abc[2])
    {
        cout << "Won" << endl;
    }
    else
    {
        cout << "Lost" << endl;
    }
}

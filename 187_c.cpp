#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    set<string> ss;
    string k;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        ss.insert(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ss.count("!" + s[i]))
        {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}

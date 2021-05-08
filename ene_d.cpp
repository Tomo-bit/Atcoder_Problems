#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    string s;
    deque<char> t;
    cin >> s;
    int rev = 0;
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s[i] == 'R')
        {
            rev = 1 - rev;
        }
        else
        {
            if (rev)
            {
                if (t.empty())
                    t.push_front(s[i]);
                else if (t.front() != s[i])
                    t.push_front(s[i]);
                else
                    t.pop_front();
            }
            else
            {
                if (t.empty())
                    t.push_back(s[i]);
                else if (t.back() != s[i])
                    t.push_back(s[i]);
                else
                    t.pop_back();
            }
        }
    }
    if (rev)
    {
        while (!t.empty())
        {
            cout << t.back();
            t.pop_back();
        }
    }
    else
    {
        while (!t.empty())
        {
            cout << t.front();
            t.pop_front();
        }
    }
}

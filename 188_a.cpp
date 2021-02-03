#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if (a > b && a - b < 3)
  {
    cout << "Yes" << endl;
  }
  else if (a < b && b - a < 3)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}

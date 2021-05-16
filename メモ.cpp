#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    for (int i = 0; i < n; i++)
    {
    }
    /*文字数取得*/
    string str = "abc";
    cout << str.length() << endl;
    /*オーバーフローを疑う(long long にする)*/
    /*int は2*10**9まで  long long は9*10^18までunsigned long long は10^19まで*/
    /* 計算回数は1秒あたり10^8回程度*/
    /*swap(s[0],s[1])で入れ替え*/
    /*stoi(s)で文字列を数字に変換*/
    /*文字列が長いときはstollを使う*/
    /*小数点以下は明示的に記述する(cout << std::fixed << std::setprecision(15) << ans << endl;)*/
    /*atanよりatan2の方が精度が良い（多分）*/
    /*string(1, 'a' + n % 26);これでcharの足し算をした上で文字列に変換できる
    理由はわからん(cf:abc_171_c)*/
    /*stingの足し算は+=をつかうと計算量が違う(+=の方が計算量が少ない)*/
}

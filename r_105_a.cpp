#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c,d;
cin >>a>>b>>c>>d;
if( 0==b+c+d-a|| 0==a+c+d-b||0==a+b+d-c
||0==a+b+c-d||0==c+d-a-b||0==b+d-a-c||0==b+c-a-d
){
cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}

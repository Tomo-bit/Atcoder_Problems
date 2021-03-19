#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(){
    int n,m;
    cin>>n>>m;
    priority_queue<int>a;
    rep(i,n){
        int r;
        cin>>r;
        a.push(r);
    }
    rep(i,m){
        int u;
        u=a.top();
        a.pop();
        a.push(u/2);


    }
    ll sum=0;
    rep(i,n){
        sum+=a.top();
        a.pop();
    }
    cout<<sum<<endl;

}

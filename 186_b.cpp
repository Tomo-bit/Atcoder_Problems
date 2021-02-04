#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<int>a(h*w);
    for (int i=0;i<h*w;i++){
        cin>> a[i];
    }
int m = *std::min_element(a.begin(),a.end());
int ans =0;
for(int i=0;i<h*w;i++){
ans += a[i]-m;
}
cout << ans << endl;
}

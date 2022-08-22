#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
ll x,y;cin>>x>>y;
if(y%2==1){
cout<<"No\n";
return;
}
ll a=2*x-y/2,b=y/2-x;
if(a>=0 && b>=0 && a+b==x && 2*a+4*b==y){
cout<<"Yes\n";
return;
}
cout<<"No\n";
}
int main(){
int t=1;
while(t--){
solve();
}
}

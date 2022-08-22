#include<bits/stdc++.h>
using namespace std;
void solve(){
int a, l;
cin>>a>>l;
if(l&1) cout<<"No";
else{
if(a==l/4) cout<<"Yes";
else{
while(a!=l/2){
--a, l-=4;
if(a==0){
cout<<"No";
return;
}
}
cout<<"Yes";
}
}
}
int main(){
ios_base::sync_with_stdio(false); cin.tie(0);
solve();
}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
ll x,y;
cin>>x>>y;
int flag = 0;
for(ll i=1;i<=x;i++){
for(ll j=1;j<=x;j++){
if((i+j) == x && (2*i+4*j) == y){
flag = 1;
break;
}
}
}
if(flag == 1)
cout<<"YES";
else
cout<<"NO";
}

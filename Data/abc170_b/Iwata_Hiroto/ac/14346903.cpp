#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
int main(){
ll x,y;
cin>>x>>y;
ll t=x;
ll c=0;
if(t*4<y&&y%2==1){
cout<<"No"<<endl;
return 0;
}
rep(i,0,x+1){
if(t*4+c*2==y){
cout<<"Yes"<<endl;
return 0;
}
t--;
c++;
}
cout<<"No"<<endl;
}

#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using P = pair<int,int>;
using ll = long long;
int main(){
ll n;
cin>>n;
ll ans=0;
if(n<=9){
ans=n;
}else if(n<=99){
ans=9;
}else if(n<=999){
ans=9+n-99;
}else if(n<=9999){
ans=9+999-99;
}else if(n<=99999){
ans=9+999-100+n-9999;
}else if(n==100000){
ans=90909;
}
cout<<ans<<endl;
}

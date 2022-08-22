#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(k,i,n) for(ll i=k;i<n;++i)
int main(void){
ll a,b;
cin>>a>>b;
if(6>a){
cout<<0<<endl;
}else if(a<13){
cout<<b/2<<endl;
}else{
cout<<b<<endl;
}
}

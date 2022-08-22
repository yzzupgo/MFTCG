#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(k,i,n) for(ll i=k;i<n;++i)
int main(void){
ll a,b;
cin>>a>>b;
if(13>a){
cout<<b/2<<endl;
}else if(a<6){
cout<<0<<endl;
}else{
cout<<b<<endl;
}
}

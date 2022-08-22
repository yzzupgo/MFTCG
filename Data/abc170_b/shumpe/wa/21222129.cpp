#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<ll(n);i++)
using ll=long long;
using P=pair<ll,ll>;
int main(){
ll N,L;
cin>>N>>L;
rep(i,N){
if(L==2*i+4*(N-i)){
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}

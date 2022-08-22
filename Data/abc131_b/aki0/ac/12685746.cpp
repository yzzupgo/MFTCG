#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll=long long;
using P=pair<int,int>;
int main(){
int n,l; cin>>n>>l;
int minj=200;
int mini,sum=0;
rep(i,n){
if(abs(l+i)<minj){
minj=abs(l+i);
mini=l+i;
}
sum+=l+i;
}
cout<<sum-mini<<endl;
return 0;
}

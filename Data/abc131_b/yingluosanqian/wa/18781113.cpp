#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN=200050;
int n,l,ans=1e9;
inline bool solve(int cs){
cin>>n>>l;
for(int i=0;i<n;i++){
ans=min(abs(ans),abs(l+i));
}
cout<<(l+l+n-1)*n/2-ans;
return true;
}
int main(){
int T=1;
for(int t=1;t<=T;t++){
bool useless=solve(t);
}
return 0;
}

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
int main(){
int n,l,ans=0,cnt=0,cnt1=0;
cin >> n >> l;
vector<int> A(n);
for(int i=0;i<n;i++){
A[i]=l+i;
}
for(int i=l;i<=n+l-1;i++){
ans+=i;
}
for(int i=0;i<n;i++){
cnt=abs(ans-A[i]);
if(A[i]==0){
cout << ans;
return 0;
}
if(cnt>cnt1){
cnt1=ans-A[i];
}
}
cout << cnt1;
}

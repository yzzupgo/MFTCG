#include<bits/stdc++.h>
using namespace std;
int n,l,ans=2147483647;
int main(){
cin>>n>>l;
for(int i=1;i<=n;i++){
ans=min(ans,abs(l+i-1));
}
cout<<n*(n+1)/2+n*(l-1)-ans<<endl;
return 0;
}

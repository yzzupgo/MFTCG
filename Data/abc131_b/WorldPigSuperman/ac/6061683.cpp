#include<bits/stdc++.h>
using namespace std;
int n,l,ans=-1,ori=0;
int main(){
cin>>n>>l;
ori=n*(n+1)/2+(l-1)*n;
for(int i=1;i<=n;i++){
int tmp=ori-(l+i-1);
if(abs(ori-ans)>abs(ori-tmp)||ans==-1) ans=tmp;
}
cout<<ans<<endl;
return 0;
}

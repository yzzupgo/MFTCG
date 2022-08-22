#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
for(int i=1;i<=n;i++){
int ctr=0;
int cpy=n;
while(cpy){
cpy/=10;
ctr++;
}
if(ctr%2==1) ans++;
}
cout<<ans<<'\n';
return 0;
}

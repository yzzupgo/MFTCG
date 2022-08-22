#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int main(){
cin>>n>>m;
if (m>=0)
for (int i=2;i<=n;i++) ans+=m+i-1;
else if (abs(m)*2+1==n)
;
else
for (int i=1;i<=n-1;i++) ans+=m+i-1;
cout<<ans<<endl;
return 0;
}

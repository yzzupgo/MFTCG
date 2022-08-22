#include <bits/stdc++.h>
using namespace std;
int main() {
int a,s,d=1;
cin>>a>>s;
int asd[a+1];
for(int i=1;i<=a;i++)asd[i]=i+s-1;
for(int i=2;i<=a;i++)if(fabs(asd[i]-0)<fabs(asd[d]-0))d=i;
int ans=0;
for(int i=1;i<=a;i++)ans+=asd[i];
ans-=asd[d];
cout<<ans;
return 0;
}

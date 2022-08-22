#include<bits/stdc++.h>
using namespace std;
int main(void)
{
int k,i,n,l,a,b,c,tol=0,ans,mn=101;
scanf("%d %d",&n,&l);
for(i=1;i<=n;i++){
k=l+i-1;
tol+=k;
k=abs(k);
mn=min(mn,k);
}
if(tol>=0) printf("%d",tol+mn);
else printf("%d\n",tol+mn);
return 0;
}

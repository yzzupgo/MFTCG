#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
int n,l;
int i,x[201],y=0,z=0,f=0;
scanf("%d %d",&n,&l);
for(i=1;i<=n;i++) x[i]=l+i-1;
for(i=1;i<=n;i++) y+=x[i];
for(i=1;i<=n;i++){
if(x[i]==0) f=1;
}
if(f==1) printf("%d\n",y);
else{
z=l+n-1;
if(z<0) printf("%d\n",y-(l+n-1));
else printf("%d\n",y-(l+1-1));
}
return 0;
}

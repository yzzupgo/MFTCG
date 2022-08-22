#include<cstdio>
#include<algorithm>
using namespace std;
int main(void)
{
int n,l,a[201],b[201],ans=0,mn=300,i,num;
scanf("%d %d",&n,&l);
for(i=1;i<=n;i++){
a[i]=l+i-1;
b[i]=a[i];
if(b[i]<0) b[i]=-b[i];
}
for(i=1;i<=n;i++){
if(b[i]<mn){
mn=b[i];
num=i;
}
}
for(i=1;i<=n;i++){
if(i!=num){
ans+=a[i];
}
}
printf("%d\n",ans);
return 0;
}

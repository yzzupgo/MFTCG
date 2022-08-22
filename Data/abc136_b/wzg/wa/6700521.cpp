#include<cstdio>
int main(){
int n,ans=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
if(i>=1&&i<=9)ans++;
if(i>=100&&i<=999)ans++;
if(i>=10001&&i<=99999)ans++;
}
printf("%d",ans);
return 0;
}

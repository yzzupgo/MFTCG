#include <cstdio>
int main(){
int n,m=0,a,b;
scanf("%d",&n);
for(int i=1;i<=n;i++){
a=i;b=0;
while(a>0){
a/=10;
b++;
}
if(b%2==1) m++;
}
printf("%d",m);
return 0;
}

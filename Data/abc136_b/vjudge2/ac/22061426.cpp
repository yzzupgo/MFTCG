#include<stdio.h>
#include<iostream>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<algorithm>
#define ll long long
#define maxn 0x3f3f3f3f
#define inf 0x3f3f3f3f3f3f3f3f
#define mdd 998244353
using namespace std;
long long i,j,m,n,mapp[510][510],b[200100],c[100],t,x,y,z,k,l,r,p,pp,num,ans,sum,key,cnt,flag,minn,maxx,d[50],pre[200100];
char zz,a[200100];
double xa[5],ya[5],xb[5],yb[5],ee[5],ff;
struct qq{ll xx,yy,zz,dd;};
queue<qq>s;
bool cmp(qq u,qq v){
return u.xx<v.xx;
}
int main(){
scanf("%lld",&n);
for(i=1,sum=0;i<=n;i++){
k=i;num=0;
while(k){
num++;k/=10;
}
if(num%2==0)continue;
sum++;
}
printf("%lld",sum);
}

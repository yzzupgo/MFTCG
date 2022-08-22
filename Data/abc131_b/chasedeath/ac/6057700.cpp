#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define reg register
#define rep(a,b,c) for(reg int a=b,a ##end=c;a<=a ##end;++a)
#define drep(a,b,c) for(reg int a=b,a ##end=c;a>=a ##end;--a)
char IO;
int rd(){
int s=0,f=0;
while(IO=getchar(),IO<'0'||IO>'9')if(IO=='-')f=1;
do s=(s<<1)+(s<<3)+(IO^'0');
while(IO=getchar(),IO>='0'&&IO<='9');
return f?-s:s;
}
const int N=10000;
int n,m;
int main(){
n=rd(),m=rd();
int mi=1e9,ans=0,s=0;
rep(i,1,n){
int x=i+m-1;
s+=x;
if(mi>abs(x)) mi=abs(x),ans=x;
}
printf("%d\n",s-ans);
}

#include<bits/stdc++.h>
using namespace std;
inline int read(){
int x=0,f=1;char ch=getchar();
while(!isdigit(ch)){if(ch=='-')f=-f;ch=getchar();}
while(isdigit(ch)){x=x*10+ch-48;ch=getchar();}
return x*f;
}
void print(int x){
if(x<0) putchar('-'),x=-x;
if(!x) return;print(x/10),putchar(x%10+48);
}
int x,y;
signed main(){
x=read(),y=read();
if((y-2*x)%2==1) puts("No");
else if((y-2*x)/2>x||(y-2*x)/2<0) puts("No");
else puts("Yes");
return 0;
}

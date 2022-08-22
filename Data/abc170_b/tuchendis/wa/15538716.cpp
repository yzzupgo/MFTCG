#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<stack>
#include<queue>
using namespace std;
typedef long long ll;
const int maxn = 2000010;
int x,y;
char nam[maxn];
ll read(){ ll s=0,f=1; char ch=getchar(); while(ch<'0' || ch>'9'){ if(ch=='-') f=-1; ch=getchar(); } while(ch>='0' && ch<='9'){ s=s*10+ch-'0'; ch=getchar(); } return s*f; }
int main(){
x=read(),y=read();
int t=y-x*2;
if((t%2==0)&&((t/2)<=x)&&((t/2)*4+(x-t/2)*2==y)) printf("Yes\n");
else printf("No\n");
return 0;
}

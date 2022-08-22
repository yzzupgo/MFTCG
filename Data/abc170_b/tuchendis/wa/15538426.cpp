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
y-=x*2;
if((y%2==0)&&((y/2)<x)) printf("Yes\n");
else printf("No\n");
return 0;
}

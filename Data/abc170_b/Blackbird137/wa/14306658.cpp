#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<map>
#include<set>
using namespace std;
inline int read()
{
int ans=0,f=1;
char c=getchar();
while(c>'9'||c<'0'){if(c=='-')f=-1;c=getchar();}
while(c>='0'&&c<='9'){ans=ans*10+c-'0';c=getchar();}
return ans*f;
}
int x,y,a,b;
int main()
{
x=read();y=read();
b=(y-x)/2;
a=x-b;
if(a<0||b<0) printf("No\n");
else printf("Yes\n");
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int x,y;
void read(int &x)
{
char ch;bool ok;
for(ok=0,ch=getchar();!isdigit(ch);ch=getchar()) if(ch=='-') ok=1;
for(x=0;isdigit(ch);x=(x<<3)+(x<<1)+(ch^48),ch=getchar()); if(ok) x=-x;
return;
}
int main()
{
read(x),read(y);
if(y<=x*4&&y>=x*2) puts("Yes");
else puts("No");
return 0;
}

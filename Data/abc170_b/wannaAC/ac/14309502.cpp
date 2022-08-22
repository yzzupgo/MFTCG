#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define re register
#define pb push_back
#define fi first
#define se second
const int N=1e6+10;
const int mod7=1e9+7;
const int mod=998244353;
const double pi=3.14;
void read(int &a)
{
a=0;int d=1;char ch;
while(ch=getchar(),ch>'9'||ch<'0') if(ch=='-') d=-1;
a=ch^48;
while(ch=getchar(),ch>='0'&&ch<='9') a=(a<<3)+(a<<1)+(ch^48);
a*=d;
}
void read(ll &a)
{
a=0;int d=1;char ch;
while(ch=getchar(),ch>'9'||ch<'0') if(ch=='-') d=-1;
a=ch^48;
while(ch=getchar(),ch>='0'&&ch<='9') a=(a<<3)+(a<<1)+(ch^48);
a*=d;
}
int main()
{
int a,b;
read(a),read(b);
int x=4*a-b;
if(x%2!=0) return puts("No"),0;
x/=2;
if(x<0) return puts("No"),0;
int y=a-x;
if(y>=0) puts("Yes");
else puts("No");
return 0;
}

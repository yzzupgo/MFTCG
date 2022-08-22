#include<bits/stdc++.h>
using namespace std;
const int inf=1e9,mod=1e9+7;
typedef long long ll;
int read() {
int x=0,f=1;
char c=getchar();
while(c<'0'||c>'9') f=(c=='-')?-1:1,c=getchar();
while(c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
return x*f;
}
main() {
int n=read(),m=read();
if(n==0)
cout<<"0";
else if(n<=13)
cout<<m/2;
else cout<<m;
}

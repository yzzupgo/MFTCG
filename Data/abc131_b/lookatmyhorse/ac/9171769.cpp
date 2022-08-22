#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,n,m,i,j,t[200005],mn=0x3f3f3f3f,rs;
string s,q;
int main()
{
cin>>n>>m;
for (i=1; i<=n; i++){
a+=m+i-1;
}
for (i=1; i<=n; i++){
if (abs(a-(a-(m+i-1)))<mn) mn=abs(a-(a-(m+i-1))),rs=a-(m+i-1);
}
cout<<rs;
}

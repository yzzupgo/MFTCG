#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l,i,a,b,c,d,s=0;
cin>>n>>l;
for (i=1;i<=n;i++)
s+=i+l-1;
a=l;
b=n+l-1;
c=s-a;
d=s-b;
if (l<=0){cout<<s<<endl;return 0;}
if (abs(s-c)>abs(s-d))
cout<<d<<endl;
else
cout<<c<<endl;
}

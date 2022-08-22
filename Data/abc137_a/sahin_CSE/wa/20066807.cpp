#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,x,y,z;
cin>>a>>b;
x=a+b;
y=a-b;
if(a<0&&b<0) z=abs(a*b);
else
z=a*b;
if(x>y&&x>z) cout<<x<<endl;
else if(y>x&&y>z) cout<<y<<endl;
else cout<<z<<endl;
return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int a,b,i,j,k=0;
cin>>a>>b;
if(a*4==b || a*2==b)
{
k=1;
}
else
{
for(i=1; i<=a; i++)
{
j=a-i;
if((i*4)+(j*2)==b)
{
k=1;
break;
}
}
}
if(k==1) cout<<"Yes";
else cout<<"No";
return 0;
}

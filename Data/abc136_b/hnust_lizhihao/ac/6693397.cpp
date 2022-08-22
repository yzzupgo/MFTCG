#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int i,n,x,ans=0,sum=0,a[10]= {0,9,0,900,0,90000};
cin>>n;
x=n;
while(x>0)
{
x/=10;
sum++;
}
if(sum%2!=0)
{
ans+=n-pow(10,sum-1)+1;
for(i=0; i<sum; i++)
ans+=a[i];
}
else
{
for(i=0; i<sum; i++)
ans+=a[i];
}
cout<<ans<<endl;
return 0;
}

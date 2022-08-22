#include <iostream>
using namespace std;
int main()
{
int k,l,fl=0;
cin>>k>>l;
if(k*2>l||k*4<l)
{
cout<<"No"<<endl;
return 0;
}
if(k*2==l||k*4==l)
{
cout<<"Yes"<<endl;
return 0;
}
for(int i=1;i<k;i++)
{
if((i*2+(k-i)*4)==l)
{
fl=1;
break;
}
}
if(fl==1)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
return 0;
}

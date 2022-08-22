#include<bits/stdc++.h>
using namespace std;
int main()
{
int max,k,val,v,f,i;
cin>>k>>val;
max=k*4;
if(val>max || val<2)
cout<<"No";
else
{
f=0;
for(i=0;i<k;i++)
{
v=2*(k-i)+4*(i);
if(val%v==0)
{
f=1;
break;
}
}
if(f==1)
cout<<"Yes";
else
cout<<"No";
}
return 0;
}

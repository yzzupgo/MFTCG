#include<bits/stdc++.h>
using namespace std;
int main()
{
long long temp,j,a,b,i,flag=0;
cin>>a>>b;
for(i=0; i<=a; i++)
{
for(j=0; j<=a; j++)
{
if(i*2+4*j==b && i+j==a)
{
flag=1;
break;
}
}
if(flag)
break;
}
if(flag)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll a,b;
cin>>a>>b;
if(b&1)
cout<<"No"<<"\n";
else if(b > a*4 || b < a*2)
cout<<"No"<<"\n";
else if(a*4==b || a*2==b)
cout<<"Yes"<<"\n";
else
{
int flag = 0;
while(b>0)
{
b = b - 6;
a = a-2;
if(b==a*2 || b==a*4)
{
flag = 1;
break;
}
}
if(flag==1)
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";
}
return 0;
}

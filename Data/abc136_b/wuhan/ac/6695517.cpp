#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n-n%10==0)
{
cout<<n;
}
else
{
if(n-n%100==0)
{
cout<<"9";
}
else
{
if(n-n%1000==0)
{
int a=n-90;
cout<<a;
}
else
{
if(n-n%10000==0)
{
cout<<"909";
}
else
{
if(n-n%100000==0)
{
int b=n-9090;
cout<<b;
}
else
{
cout<<"90909";
}
}
}
}
}
return 0;
}

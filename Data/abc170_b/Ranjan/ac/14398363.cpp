#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll x,y;
cin>>x>>y;
ll t=4*x-y;
if(t%2!=0)
{
cout<<"No"<<endl;
return 0;
}
else
{
ll i=t/2;
ll m=x-i;
if(i<0 || m<0 || i>x || m>x)
{
cout<<"No"<<endl;
return 0;
}
if(i+m==x && 2*i + 4*m==y)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}

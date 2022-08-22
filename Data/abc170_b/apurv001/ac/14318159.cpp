#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y%2!=0)
cout<<"No"<<endl;
else
{
int r=y/4;
y=y%4;
int l=y/2;
if(l+r<=x&&l+2*r>=x)
{
cout<<"Yes"<<endl;
}
else
cout<<"No"<<endl;
}
}

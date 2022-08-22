#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int r=y/4;
int l=0;
y=y%4;
if(y%2==0)
l=y/2;
if(l+r<=x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}

#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll x,y;
cin>>x>>y;
int t=4*x-y;
if(t==0)
{
cout<<"No"<<endl;
return 0;
}
if(t%2==0)
{
int i=t/2;
int m=x-i;
if(m>0 && m<x)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}

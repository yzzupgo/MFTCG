#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll x,y;
cin>>x>>y;
bool f=false;
for(ll i=x;i>=0;i--)
{
for(ll j=0;j<=x;j++)
{
if((2*i+4*j)==y)
{
f=true;
break;
}
}
}
if(f)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}

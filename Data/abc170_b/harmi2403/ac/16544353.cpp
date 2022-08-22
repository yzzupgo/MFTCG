#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll x,y;
cin>>x>>y;
bool f=false;
ll j=0;
for(ll i=x;i>=0;i--)
{
if((2*i+4*j)==y)
{
f=true;
break;
}
j++;
}
if(f)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}

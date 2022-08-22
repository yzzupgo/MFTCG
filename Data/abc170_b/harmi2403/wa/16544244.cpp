#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int x,y;
cin>>x>>y;
bool f=false;
for(int i=x;i>=0;i--)
{
for(int j=0;j<=x;j++)
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

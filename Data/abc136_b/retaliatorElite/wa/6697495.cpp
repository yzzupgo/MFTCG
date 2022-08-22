#include<cstdio>
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
if(n>=9) ans+=9;
if(n>=999) ans+=900;
if(n>=99999) ans+=90000;
if(n>0&&n<9) ans+=n-0;
if(n>100&&n<999) ans+=n-100;
if(n>10000&&n<99999) ans+=n-10000;
cout<<ans+1;
return 0;
}

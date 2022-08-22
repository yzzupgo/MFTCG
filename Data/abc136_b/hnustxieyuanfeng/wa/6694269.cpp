#include<iostream>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;
int cnt=0;
int m=n;
while(m>0)
{
m/=10;
cnt++;
}
if(cnt==1){
cout<<n;
}
if(cnt==2){
cout<<"9";
}
if(cnt==3){
int d=9+n-100+1;
cout<<d;
}
if(cnt==4){
cout<<"909";
}
if(cnt==5){
int d=909+m-10000+1;
cout<<d;
}
if(n==100000){
cout<<"90909";
}
return 0;
}

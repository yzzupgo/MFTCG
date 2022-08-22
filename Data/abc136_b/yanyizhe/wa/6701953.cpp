#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t=0;
cin>>n;
if(n>0&&n<10)
t+=n;
if(n>=10&&n<100)
t=t;
if(n>=100&&n<1000)
t+=n-99+9;
if(n>=1000&&n<10000)
t=t;
if(n>=10000&&n<100000)
t+=n-9999+909;
if(n=100000)
t=90909;
cout<<t;
}

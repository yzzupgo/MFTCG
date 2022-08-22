#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n<10 && n>0)
cout<<n;
else
if(n<100 && n>9)
cout<<9;
else
if(n>99 && n<1000)
cout<<9+(n-99);
else
if(n>999 && n<10000)
cout<<9+900;
else
if(n>9999 && n<100000)
cout<<909+(n-9999);
else
cout<<90909;
}

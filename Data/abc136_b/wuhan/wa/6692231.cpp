#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n-n%10==0)
{
cout<<n;
}
else
{
if(n-n%100==0)
{
cout<<"9";
}
else
{
if(n-n%1000==0)
{
int a=n-90;
cout<<a;
}
else
{
if(n==10000) cout<<"910";
else cout<<"909";
}
}
}
return 0;
}

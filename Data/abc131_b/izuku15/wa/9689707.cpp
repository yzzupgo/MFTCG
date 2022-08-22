#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
int a[n],i,s;
s=0;
bool t;
t=true;
int sum=0;
vector<int> p;
for(i=0;i<n;i++)
{
s = l+i;
a[i]=s;
sum = sum+a[i];
if(s==0)
t = false;
}
if(t && a[0]>0)
{
cout<<sum-a[0];
}
if(t && a[0]<0)
{
cout<<sum+a[n-1];
}
if(!t)
cout<<sum;
return 0;
}

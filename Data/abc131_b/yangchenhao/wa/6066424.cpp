#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,s;
cin>>n>>s;
int a[210];
a[0]=s;
int sum=s;
int mn=110;
for(int i=1;i<n;i++)
{
a[i]=a[i-1]+1;
sum+=a[i];}
for(int i=0;i<n;i++)
{
if(abs(a[i])<mn)
mn=abs(a[i]);
}
cout<<sum-mn<<endl;
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,s=0;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
a[i]=k+i;
if(a[i]==0)
s++;
}
sort(a,a+n);
long int b=0;
for(int i=0;i<n;i++)
{
b+=a[i];
}
if(s>0)
cout<<b;
else
cout<<b-a[0];
return 0;
}

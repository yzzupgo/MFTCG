#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,s=0,p=0;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
a[i]=k+i;
if(a[i]==0)
s++;
else if(a[i]<0)
p++;
}
sort(a,a+n);
long int b=0;
for(int i=0;i<n;i++)
{
b+=a[i];
}
if(s>0)
cout<<b;
if(p>0&&s==0)
cout<<b-a[p-1];
if(p==0&&s==0)
cout<<b-a[0];
return 0;
}

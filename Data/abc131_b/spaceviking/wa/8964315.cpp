#include <bits/stdc++.h>
using namespace std;
int main()
{ int n,L;
cin>>n>>L;
int a[n];
for(int i=0;i<n;i++)
a[i]=L+i;
int min=abs(a[0]),l=a[0];
for(int i=0;i<n;i++)
{
if(min>abs(a[i]))
{
min=a[i];
l=a[i];
}
}
int t=0;
for(int i=0;i<n;i++)
t+=a[i];
t-=l;
cout<<t;
return 0;
}

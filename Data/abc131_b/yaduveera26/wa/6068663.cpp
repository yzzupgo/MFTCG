#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
a[i]=k+i;
}
sort(a,a+n);
long int b=0;
for(int i=1;i<n;i++)
{
b+=a[i];
}
cout<<b;
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l,ans=1;
cin >> n >> l;
int MIN=abs(0-l);
if(l>=0)
cout << (l-1)*(n-1)+(2+n)*(n-1)/2;
else
if(n+l+1<0)
cout << (l-1)*(n-1)+n*(n-1)/2;
else
{
for(int i=0;i<n;i++)
{
if(abs(0-1+1-i)<MIN)
{
ans=i+1;
MIN=abs(0-l+1-i);
}
}
cout << (l-1)*n+(1+n)*n/2-(ans+l-1);
}
return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
if(l<0&&l+n>0)
cout<<(l+n+l-1)*(n-1)/2;
if(l>=0)
cout<<(l+1+n+1)*(n-1)/2;
if(l<0&&l+n<=0)
cout<<(l+1+l+1+n-4)*(n-1)/2;
return 0;
}

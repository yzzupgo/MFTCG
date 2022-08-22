#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
if(l<0&&l+n>1)
cout<<(l+n+l-1)*n/2;
if(l>=0)
cout<<(l+1+l+n-1)*(n-1)/2;
if(l<0&&l+n<=1)
cout<<(l+l+n-2)*(n-1)/2;
return 0;
}

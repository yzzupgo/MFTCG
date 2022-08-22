#include<bits/stdc++.h>
using namespace std;
int i,j,a[20],n,b,c,l;
int main()
{
for(cin>>n>>l;i<n;i++)c+=l+i;
cout<<(l<0?(l+i>=1?c:c-(l+i-1)):c-l);
}

#include<bits/stdc++.h>
using namespace std;
int i,j,a[20],n,b,c,l;
int main()
{
for(cin>>n>>l,i=1;i<=n;i++)c+=l+i-1;
cout<<(l<0?(l+i<0?c-(l+i-2):c):c-l);
}

#include <bits/stdc++.h>
using namespace std;
typedef pair<string,int>psi;
int a[1000],x,sum;
int main()
{
int n,l; cin>>n>>l;
for(int i=1;i<=n;i++)
{
a[i]=i+l-1;
sum+=a[i];
}
if(l<0 && (l+n-1)>=0)
x=0;
else if(l>=0)
x=l;
else x=l+n-1;
cout<<sum-x;
}

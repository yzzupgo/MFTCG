#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
vector<int> sum(n);
sum[0]=l;
for(int i=1 ; i<n ; ++i)
{
sum[i]=i+l+sum[i-1];
}
int ans=sum[n-1]-sum[0]*2;
for(int i=1 ; i<n ; ++i)
{
ans=min(ans,sum[n-1]-sum[i]*2);
}
cout<<ans<<endl;
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
vector<int> v;
int sum=0;
for(int i=1;i<=n;i++)
{
v.push_back(i+l-1);
sum+=i+l-1;
}
int ans,diff=int(1e9);
for(auto i:v)
if(abs(i)<diff)
ans = sum-i,diff=abs(i);
cout<<ans<<"\n";
return 0;
}

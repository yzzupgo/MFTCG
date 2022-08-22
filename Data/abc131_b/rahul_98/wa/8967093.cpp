#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
vector<int> v;
int sum=0;
for(int i=0;i<n;i++)
{
v.push_back(i+l-1);
sum+=i+l-1;
}
int ans,diff=int(1e9);
for(auto i:v)
if((sum-i)<diff)
ans = sum-i,diff=(sum-i);
cout<<ans<<"\n";
return 0;
}

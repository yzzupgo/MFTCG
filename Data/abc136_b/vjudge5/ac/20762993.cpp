#include<bits/stdc++.h>
#define ll long long
int main()
{
using namespace std;
ll n,ans=0;
cin>>n;
string s;
vector<ll>v;
for(ll i=1;i<=n;i++)
{
v.push_back(i);
}
for(ll i=0;i<v.size();i++)
{
s=to_string(v[i]);
if(s.size()%2==1)ans++;
s.clear();
}
cout<<ans<<endl;
}

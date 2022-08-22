#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
ll a;
cin>>a;
ll b;
cin>>b;
ll c;
ll d;
ll e;
vector<ll> lis;
c=a+b;
d=a-b;
e=a*b;
lis.push_back(c);
lis.push_back(d);
lis.push_back(e);
sort(lis.begin(),lis.end());
cout<<lis[2]<<"\n";
return 0;
}

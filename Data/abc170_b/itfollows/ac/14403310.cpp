#include<bits/stdc++.h>
#define ll long long
#define pb(a) push_back(a)
using namespace std;
int solveC()
{
int x,n;
cin>>x>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];
}
bool solve()
{
ll x,y;
cin>>x>>y;
ll tt=y-2*x;
if(tt<0 || tt%2!=0) return false;
ll t=tt/2;
ll cc=x-t;
if(cc<0) return false;
return true;
}
int main()
{
if(solve()) cout<<"Yes\n";
else cout<<"No\n";
}

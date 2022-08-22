#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
const int N=200000;
void Run()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
ll a[N],s,res,f;
map<char,ll>mp;
vector<ll>v;
int main()
{
Run();
int x,y;
cin>>x>>y;
if(y%2==0)
{
if(4*x>=y&&y>=2*x)
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
}

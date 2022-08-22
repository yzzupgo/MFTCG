#pragma GCC optimize("O3","unroll-loops","omit-frame-pointer","inline")
#pragma GCC option("arch=native","tune=native","no-zeroupper")
#pragma GCC target("avx","popcnt")
#include <x86intrin.h>
#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define mp make_pair
#define hello cout<<"hello"<<"\n"
#define forr(i,a,b) for(int i=a;i<b;i++)
#define it(s) for(auto itr:s)
#define dvg(s) for(auto itr:s) cout<<itr<<" ";cout<<endl;
#define dbg(s) cout<<#s<<"= "<<s<<endl;
typedef long long int lli;
typedef unsigned long long int ulli;
const lli INF=(lli)1e17+5;
const ulli MOD=1e9+7;
vector<vector<int>>edge;
vector<bool> vis,chk;
vector<int> val,ss;
int n;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
std::cout<< std::fixed;
std::cout.precision(6);
lli x,y;
cin>>x>>y;
bool flag=false;
if((y-2*x)%2==0 && (y-2*x)/2<=x)
{
flag=true;
}
if(flag) cout<<"Yes\n";
else cout<<"No\n";
}

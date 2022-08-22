#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define loope(i,a,b) for(ll i=a;i<=b;i++)
#define test() ull t;cin>>t;while(t--)
#define puu pair<ull,ull>
#define f first
#define s second
#define pb push_back
#define mkp make_pair
#define ins insert
#define Vint vector<int>
#define Vull vector<ull>
#define nl cout<<endl
#define sp cout<<" "
#define MOD 1000000007
#define all(x) x.begin(),x.end()
vector<int> cache(100005);
int fact(int k)
{
if(k<2)
return 1;
if(cache[k]!=0)
return cache[k];
return cache[k] = k*fact(k-1) % MOD;
}
int main()
{
int a,b;
cin>>a>>b;
if(a>=13)
cout<<b;
else if(6<=a<13)
cout<<b/2;
else
cout<<0;
}

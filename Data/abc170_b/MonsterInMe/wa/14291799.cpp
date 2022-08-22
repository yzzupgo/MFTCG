#include <bits/stdc++.h>
#define int long long
#define uint unsigned int
#define ld long double
#define showoff ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define pii pair<int,int>
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define RFOR(i,a,b) for(int i=a;i>b;--i)
#define f first
#define se second
#define maxn 201005
#define all(v) v.begin(),v.end()
#define sz(x) (int)x.size()
#define mod 1000000007
#define pqueue priority_queue<int>
#define pdqueue priority_queue< int,vector<int> ,greater< int >>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int power(int a,int n)
{
a %= mod;
if(n == 1)return a;
if(n == 0)return 1;
if(n%2)return (a*(power((a*a)%mod,n/2)%mod))%mod;
return power((a*a)%mod,n/2)%mod;
}
const int inf = (int) 1e18;
int inverse(int x){
return power(x,mod-2)%mod;
}
void solve(){
int x,y;
cin >> x >> y;
if(y%2 == 0 && 2*x-y/2 >= 0)cout << "Yes\n";
else cout << "No\n";
}
signed main()
{
showoff;
int T = 1;
FOR(t,1,T+1){
solve();
cout << "\n";
}
return 0;
}

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define ll long long
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define vii vector<pii>
#define mi map<ll,ll>
#define mii map<pii,ll>
#define all(a) (a).begin(),(a).end()
#define fi first
#define si second
#define sz(x) (ll)x.size()
#define endl '\n'
#define checkbit(n,b) ((n >> b) & 1)
#define mod 1000000007
#define inf 1000000000000000000
#define puts(n) cout<<n;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define setbits(x) __builtin_popcount(x)
#define mset(m,v) memset(m,v,sizeof(m))
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll x,y;
cin>>x>>y;
for(ll i=0;i<=x;i++){
ll val = i*2+(x-i)*4;
if(val==y){
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}

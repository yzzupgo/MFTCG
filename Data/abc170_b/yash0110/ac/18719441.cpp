#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long int
#define ld long double
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
#define endl '\n'
#define setbits(x) (__builtin_popcount(x))
int mod=1000000007;
int INF64=mod*mod+1;
void solve(){
int x,y;
cin>>x>>y;
if(y>=2*x&&y<=4*x&&((y-2*x)%2)==0)
cout<<"Yes";
else
cout<<"No";
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int T=1;
for(int i=1;i<=T;i++){
solve();
}
cerr<<"Time : "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
}

#include "bits/stdc++.h"
using namespace std;
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<string> vs;
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define all(x) (x).begin(), (x).end()
#define cin(x) for(auto &it : x) cin>>it;
#define cout(x) for(auto &it : x) cout<<it<<" ";
const int MOD = 1e9 + 7;
const int inf = 1e9 +10;
const ll INF = 1e18 + 10;
void solve();
void dbg(int x){ cerr<<" x is "<<x<<"\n";}
void setIO(string s) {
ios_base::sync_with_stdio(0); cin.tie(0);
}
int main()
{
int TC;
TC = 1;
while(TC--){
solve();
}
return 0;
}
void solve(){
int x, y; cin>>x>>y;
int b = (y - 2*x)/2;
int a = (x - b);
cout<<a<<" "<<b<<"\n";
if(a*2 + b*4 == y && a >= 0 && b >=0){
cout<<"Yes\n";
}else{
cout<<"No\n";
}
}

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x) (x).begin() , (x).end()
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
typedef long long int ll;
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
const ll mod = 1e9+7;
const double eps = 1e-9;
void solve(){
int x,y;
cin>>x>>y;
for(int i=0;i<=100;i++) {
for(int j=0;j<=100;j++) {
if((i*2+j*4==y)&&(i+j==x)) {
cout<<"Yes\n";
return;
}
}
}
cout<<"No\n";
return;
}
int main(){
fastio
int test=1;
while(test--)
solve();
return 0;
}

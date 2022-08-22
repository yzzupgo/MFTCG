#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define int long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define eb emplace_back
#define fn for(int i =0 ;i <n;i++)
#define fn1 for( int i =1;i<=n; i++)
#define fm for(int j =0 ;j <m;j++)
#define fm1 for(int j =1;j<=m;j++)
#define fi first
#define se second
#define endl '\n'
#define PI 3.14159265358979323846
#define MOD 1000000007
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
const int N = 2e6+5;
const int INF = 1e18L;
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');
cerr.write(names, comma - names) << ": " << arg1 << " |";
__f(comma + 1, args...);
}
int ar[N];
int dp[N];
signed main(){
IOS;
int T=1;
while(T--){
int x, y;
cin>>x>>y;
int c, t;
if((4*x-y)<0 || (4*x-y)&1)return cout<<"No",0;
cout<<"Yes";
}
return 0;
}

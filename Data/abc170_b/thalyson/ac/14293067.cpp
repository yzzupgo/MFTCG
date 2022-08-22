#include <bits/stdc++.h>
using namespace std;
#define F first
#define FF first.first
#define FS first.second
#define S second
#define SF second.first
#define SS second.second
#define ii pair<int,int>
#define iii pair<ii, int>
#define iiii pair<ii, ii>
#define viiii vector< iiii >
#define viii vector< iii >
#define vii vector< ii >
#define vi vector< int >
#define vvi vector<vector< int > >
#define int long long
#define sz(x) ((int)x.size())
#define all(x) x.begin(),x.end()
#define pb push_back
#define FOR(v,i,l) for(int v = i; v < (int)l; ++v)
#define REP(v,l) FOR(v, 0, l)
#define EPS 1e-6
#define oo (1LL<<60)
#define MAX 1000000000000000000LL
#define MOD 1000000007LL
#define debug(x) cout << #x << " is " << x << "\n";
const int dx[8] = {1, 1, -1, -1, 2, 2, -2, -2};
const int dy[8] = {2, -2, 2, -2, 1, -1, 1, -2};
int PAsum(int in, int fi, int s){
if(fi<in)return 0;
return ((in+fi)*(1+(fi-in)/s))/2LL;
}
int modPow(int x, int y, int mod = MOD){
int ans = 1;
while( y ){
if(y%2){
ans = (ans*x)%mod;
}
x = (x*x)%mod;
y /= 2;
}
return ans;
}
int countBit(int x){
int ans = 0;
while(x){
ans += (x%1);
x /= 2;
}
return ans;
}
int N, M, K, L, R, J, P, CASES;
int A,B,C,D;
main(){
cin >> N >> M;
if( M%2 == 0 and M >= N*2 and M <= N*4 ) printf("Yes\n");
else printf("No\n");
}

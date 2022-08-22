#include<bits/stdc++.h>
using namespace std;
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define ll int
#define bits_count __builtin_popcountll
#define endl '\n'
#define double long double
#define ld double
#define FOR(i,a,n) for (ll i=(a);i<=(n);++i)
#define RFOR(i,a,n) for (ll i=(n);i>=(a);--i)
#define ZERO(a) memset((a),0,sizeof((a)))
#define MINUS(a) memset((a),-1,sizeof((a)))
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define all(g) g.begin(),g.end()
#define sz(x) (ll)x.size()
#define pr pair<int,int>
int fastMax(int x, int y) { return (((y-x)>>(32-1))&(x^y))^y; }
int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }
void solve(){
int X,Y; cin>>X>>Y;
FOR(i,1,X){
int other = X-i;
if(i*2 + other*4 == Y){
cout<<"Yes\n";
return;
}
}
cout<<"No\n";
}
signed main(){
FastRead;
int t = 1;
FOR(i,1,t){
solve();
}
}

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1000000000000
#define inf 2147483647
#define MOD 1000000007
#define MAXR 100000
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define CST(x) cout<<fixed<<setprecision(x)
template<class T> inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
int gcd(int a, int b) {
if (b==0) return a;
else return gcd(b, a%b);
}
int lcm(int a, int b) {
return a * b / gcd(a, b);
}
int two(int n){
ll ans=1;
rep(i,n){
ans*=2;
}
return ans;
}
int main() {
cin.tie(0);
cout.tie(0);
ios::sync_with_stdio(false);
int x,y;
cin>>x>>y;
if((4*x-y)%2==0 && (y-2*x)%2 ==0 && 4*x>=y && y>= 2*x)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}

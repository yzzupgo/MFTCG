#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n); i++)
#define rrep(i,n) for (int i=(n-1); i>=0; i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())
using ll = long long;
using P = pair<ll,ll>;
using vi = vector<ll>;
using vvi = vector<vi>;
const ll INF = 8e18;
template<class T> inline bool chmax(T& a, T b) {
if (a < b) { a = b; return true; }
return false;
}
template<class T> inline bool chmin(T& a, T b) {
if (a > b) { a = b; return true; }
return false;
}
void debug_out() { cout << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
cout << H << " ";
debug_out(T...);
}
#ifdef _DEBUG
#define debug(...) debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif
int main() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
int x,y; cin >> x >> y;
rep(i,400)rep(j,400){
int a = i*2 + j*4;
int b = i + j;
if(a==y && b==x){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}

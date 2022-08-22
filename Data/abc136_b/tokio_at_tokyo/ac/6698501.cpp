#include <bits/stdc++.h>
using namespace std; typedef long double ld; typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"
#define MP make_pair
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORR(x,arr) for(auto& x:arr)
#define PII pair<int, int>
#define FI first
#define SE second
#define ALL(x) (x).begin(), (x).end()
const int INF=1<<30; const ll LINF=1LL<<60 ; const ll mod=1e9+7 ;
template<class T>inline bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>inline bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
int main(){
ll s; cin >> s;
ll n =0;
ll cnt = s;
while(cnt>=1){
cnt /= 10;
n += 1;
}
ll ans = 0;
FOR(i,0,n/2-1) ans += 9*pow(100,i);
if(n%2==1){
if(n>1){
ll cur = 1;
FOR(i,1,n-2) {cur *= 10; cur += 1;}
ans += s-cur*9;
}else{
ans = s;
}
}
cout << ans << endl;
return 0;
}

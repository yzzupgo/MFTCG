#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
#define LINF (1LL << 60)
typedef long long i64;
typedef pair<i64,i64> P;
inline i64 mod(i64 a, i64 m) { return (a % m + m) % m; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int a,b;
void solve(){
cin >> a >> b;
if(a >= 13) cout << b << endl;
else if(a >= 6) cout << b/2 << endl;
else cout << 0 << endl;
}
int main(){
std::cin.tie(0);
std::ios::sync_with_stdio(false);
int t = 1;
while(t--){
solve();
}
return 0;
}

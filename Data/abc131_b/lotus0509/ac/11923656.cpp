#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
#define LINF (1LL << 60)
#define PI 3.14159265358979
typedef long long i64;
typedef pair<i64,i64> P;
inline i64 mod(i64 a, i64 m) { return (a % m + m) % m; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int n, m;
void solve(){
cin >> n >> m;
int ans = 0, mi = INF, mm;
for(int i = 0; i < n; i++){
ans += m+i;
if(chmin(mi, abs(m+i))) mm = m+i;
}
cout << ans-mm << endl;
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

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
int n, a;
void solve(){
cin >> n >> a;
int cnt = 0, mi = INF, m = 1;
for(int i = 0; i < n; i++){
cnt += a+i;
if(chmin(mi, abs(a+i)) && a+i < 0) m = -1;
}
cout << cnt-mi*m << endl;
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

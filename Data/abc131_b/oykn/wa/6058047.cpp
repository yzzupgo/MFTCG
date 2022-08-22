#pragma GCC optimize("Ofast")
#pragma GCC target("avx")
#include <bits/stdc++.h>
using namespace std;
#define INIT std::cin.tie(0);std::ios::sync_with_stdio(false);
#define ALL(c) (c).begin(), (c).end()
#define CALL(c) (c).cbegin(), (c).cend()
#define RALL(c) (c).rbegin(), (c).rend()
#define CRALL(c) (c).crbegin(), (c).crend()
#define REP(i,n) for (int i = 0; i < static_cast<int>(n); i++)
#define FOR(i,s,n) for (int i = s; i < static_cast<int>(n); i++)
#define ASC(t) [](t& x, t& y){ return x < y; }
#define DESC(t) [](t& x, t& y){ return x > y; }
#define PSORT(s,p,e) partial_sort((s), next((s), (p)), (e))
#define VIEW(v,t) for_each((v).begin(), (v).end(), [](t& a) { cout << a << " "; }); cout << endl;
#define IN(a,x,b) (a<=x && x<=b)
template<class T> inline T CHMAX(T& x, const T y){return x=(x<y)?y:x;}
template<class T> inline T CHMIN(T& x, const T y){return x=(x>y)?y:x;}
#define OUT(dist) std::cout<<(dist);
#define WS std::cout<<" ";
#define NL std::cout<<"\n"
using PII = pair<int, int>;
using PLL = pair<long long, long long>;
using LL = long long;
using ULL = unsigned long long;
template<class T> using V = vector<T>;
template<class T> using V2 = vector<vector<T>>;
template<class T, int W=255> using A = array<T, W>;
template<class T, int W=255, int H=255> using A2 = array<array<T, W>, W>;
int main(){
INIT;
int N, L; cin >> N >> L;
int ans = 0;
int minx = 100000000;
for(int i = 1; i <= N; i++) {
int sum = 0;
for(int j = 1; j <= N; j++) {
if(i == j) continue;
sum += L + j - 1;
}
if(std::abs(sum-(L+i-1)) < minx) {
ans = sum;
minx = std::abs(sum-(L+i-1));
}
}
cout << ans;
}

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<bitset>
using namespace std;
typedef long long ll;
typedef vector<int> VI;
#define FOR(i,a,n) for(int (i)=(a);(i)<(n);(i)++)
#define eFOR(i,a,n) for(int (i)=(a);(i)<=(n);(i)++)
#define SORT(i) sort((i).begin(),(i).end())
#define rSORT(i,a) sort((i).begin(),(i).end(),(a))
constexpr auto INF = 1000000000;
constexpr auto LLINF = 1LL << 62;
constexpr auto mod = 1000000007;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; }return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; }return 0; }
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int n;
cin >> n;
int ans = 0;
if (n >= 9) {
ans += 9;
if (n >= 999) {
ans += 900;
if (n >= 99999)ans += 90000;
else ans += n - 9999;
}
else ans += n - 99;
}
else ans += n;
cout << ans << "\n";
}

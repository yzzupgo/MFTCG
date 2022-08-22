#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define Fi first
#define Se second
#define ALL(v) begin(v), end(v)
#define RALL(v) rbegin(v), rend(v)
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define REP(i,n) for(int i = 0; i < (n); i++)
#define chmin(a,b) (a) = min((ll)(a), (ll)(b))
#define chmax(a,b) (a) = max((ll)(a), (ll)(b))
#define I(x) cin >> x;
#define D(x) cerr << (x) << " ";
#define BR cerr << "\n";
#define P(x) cout << (x) << endl;
#define FIX cout << fixed << setprecision(10);
const int ARRAY = 100005;
const int INF = 1001001001;
const ll LINF = 1001001001001001001;
const int MOD = 1e9 + 7;
ll N = 0;
ll ret = INF;
int main(void){
ll L;
I(N);
I(L);
ll sum = 0;
ll m = INF;
REP(i, N) {
sum += L + i;
chmin(m, abs(L + i));
}
ret = sum - m;
P(ret);
}

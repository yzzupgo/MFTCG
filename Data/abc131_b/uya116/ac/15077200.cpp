#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> Pair;
typedef vector<ll> vll;
typedef vector<vector<ll>> Graph;
typedef vector<string> vs;
typedef vector<pair<ll, ll>> Pll;
typedef queue<ll> qll;
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define REPA(i,a) for(ll i=0;i<(ll)(a.size());i++);
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define COUT(a) cout << (a) << endl;
#define ENDL(a) cout << endl;
#define COUTA(i,a) for(ll i=0;i<(ll)(a.size());i++) {cout << (a)[i] << " ";} cout << endl;
#define pb push_back
#define paired make_pair
#define ALL(a) (a).begin(),(a).end()
#define SORT(a) sort((a).begin(),(a).end())
#define RSORT(a) sort((a).rbegin(), (a).rend())
#ifdef _DEBUG
#define debug(x) cout << "[debug] " << #x << ": " << x << endl
#else
#define debug(x)
#endif
template <typename T>
void debugV(const vector<T> v) {
#ifdef _DEBUG
rep(i, v.size()) {
cout << i << ":" << v[i] << " ";
}
cout << endl;
#else
(void)v;
#endif
}
const unsigned int BIT_FLAG_0 = (1 << 0);
const unsigned int BIT_FLAG_1 = (1 << 1);
const unsigned int BIT_FLAG_2 = (1 << 2);
const unsigned int BIT_FLAG_3 = (1 << 3);
const unsigned int BIT_FLAG_4 = (1 << 4);
const unsigned int BIT_FLAG_5 = (1 << 5);
const unsigned int BIT_FLAG_6 = (1 << 6);
const unsigned int BIT_FLAG_7 = (1 << 7);
const unsigned int BIT_FLAG_8 = (1 << 8);
const unsigned int BIT_FLAG_9 = (1 << 9);
const unsigned int BIT_FLAG_10 = (1 << 10);
const unsigned int BIT_FLAG_11 = (1 << 11);
constexpr ll INF = 0x3f3f3f3f3f3f3f3f;
constexpr double PI=3.14159265358979323846;
constexpr int MOD = 1000000007;
void Main() {
ll n, l;
cin >> n >> l;
ll total = 0;
ll min_apple = INF;
ll min_apple_index = 0;
REP(i, n) {
if (min_apple > abs(i + l)) {
min_apple = abs(i + l);
min_apple_index = i;
}
total += i + l;
}
COUT(total - min_apple_index - l);
}
int main()
{
cin.tie(0);
ios_base::sync_with_stdio(false);
cout << fixed << setprecision(15);
Main();
}

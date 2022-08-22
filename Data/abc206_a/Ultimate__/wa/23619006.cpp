#include <bits/stdc++.h>
#define I_O ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define lls int64_t
#define ld long double
#define db double
#define ull unsigned long long int
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<db,db>
#define psi pair<string,int>
#define vi vector<int>
#define vl vector<ll>
#define vd vector<db>
#define vs vector<string>
#define vb vector<bool>
#define vpi vector<pii>
#define vpl vector<pll>
#define vpd vector<pdd>
#define vpsi vector<psi>
#define pb push_back
#define pf push_front
#define MP make_pair
#define in insert
#define ff first
#define ss second
#define al(v) v.begin(),v.end()
#define alr(v) v.rbegin(), v.rend()
#define srt(v) sort(al(v))
#define srtr(v) sort(al(v), greater<int>());
#define len(x) ((ll)(x).length())
#define sz(x) ((ll)(x).size())
#define rev(v) reverse(al(v))
#define btcnt(n) __builtin_popcount(n)
#define acl(v,n) accumulate(al(v), n)
#define eb emplace_back
#define lb(v,kk) lower_bound(al(v), kk) - v.begin()
#define ub(v,kk) upper_bound(al(v), kk) - v.begin()
#define tpu(str) transform(al(str), str.begin(), ::toupper)
#define tpl(str) transform(al(str), str.begin(), ::tolower)
#define cignr cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define mxv(v) *max_element(al(v))
#define mnv(v) *min_element(al(v))
const int MOD = 1e9 + 7;
const ll INF = 2e18;
const int mxn = 2e9 + 9;
const int mxd = 2e5 + 5;
const int mxa = 1e5 + 5;
lls gcd(lls a, lls b) {
if(b == 0LL) {
return a;
}
return gcd(b, a % b);
}
lls lcm(lls a, lls b) {
return (a / gcd(a, b) * b);
}
#define PI acos(-1)
#define Cn continue
#define Br break
#define off return 0
#define N '\n'
#define WT(somthing) auto az = something; cout << az << N;
#define WTS(something) cout << something << N;
#define rep(i,n) for(lls i = 0; (lls)i < n; i++)
#define repn(i,a,b) for(lls i = (lls)(a); i < (lls)(b); i++)
#define repr(i,a,b) for(lls i = (lls)(a) - 1; i >= (lls)(b); i--)
#define test_case() int T; T = 1; while(T--)
using namespace std;
lls maxll(lls x, lls y) {
return x > y ? x : y;
}
lls minll(lls x, lls y) {
return x < y ? x : y;
}
void Run_Case() {
int ka = 206, a;
cin >> a;
db m = a * 1.08;
m = floor(a);
if(m > ka) {
cout << ":(" << N;
} else if(m == ka) {
cout << "so-so" << N;
} else {
cout << "Yay!" << N;
}
}
int main() {
I_O
test_case() {
Run_Case();
}
off;
}

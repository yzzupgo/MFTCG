#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<char, char> pcc;
#define ALL(a) (a).begin(),(a).end()
#define ZP(a,len) setfill('0') << setw(len) << right << a
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
const ll LINF = 1e11;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
signed main() {
cin.tie(0);
ios::sync_with_stdio(false);
int a, b;
cin >> a >> b;
if (13 <= a) {
cout << b << endl;
} else if (6 <= a) {
cout << b / 2 << endl;
} else {
cout << 0 << endl;
}
return 0;
}

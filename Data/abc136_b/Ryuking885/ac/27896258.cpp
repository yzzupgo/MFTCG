#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define REP(i,a,b) for (int i = a; i < (int)(b); i++)
#define ALL(c) (c).begin(), (c).end()
#define F first
#define S second
#define PB push_back
#define MP make_pair
template<class T> bool chmin(T &a, const T &b) {if (a > b) { a = b; return true;} return false;}
template<class T> bool chmax(T &a, const T &b) {if (a < b) { a = b; return true;} return false;}
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
const ll INF = 1LL << 60;
const int inf = 1001001001;
const ll mod = 1000000007;
const double PI = 3.1415926537;
bool solve(int n) {
int order = 0;
while (n > 0) {
order++;
n /= 10;
}
if (order % 2 == 1) return true;
return false;
}
int main()
{
int n; cin >> n;
int ans = 0;
for (int i = 1; i <= n; i++) {
if (solve(i)) ans++;
}
cout << ans << endl;
}

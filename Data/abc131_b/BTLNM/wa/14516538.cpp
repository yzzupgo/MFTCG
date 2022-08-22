#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<char> vc;
typedef queue<ll> ql;
typedef deque<ll> dql;
typedef priority_queue<ll > pql;
typedef set<ll> sl;
typedef pair<ll, ll> pl;
typedef vector<vl> vvl;
typedef vector<pl> vpl;
#define rep(i,n) for(ll i = 0; i < ll(n); i++)
#define rep2(i,n) for(ll i = 1; i <= ll(n); i++)
#define all(v) (v).begin(), (v).end()
bool chmin(ll &a, ll b) {if(b < a) {a = b; return 1;} return 0;}
bool chmax(ll &a, ll b) {if(b > a) {a = b; return 1;} return 0;}
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
const ll MAX = 1e9;
const char newl = '\n';
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
ll n, l;
cin >> n >> l;
ll sum=0;
rep2(i, n) sum += l+i-1;
cout << sum - max(l, (ll)0) << newl;
return 0;
}

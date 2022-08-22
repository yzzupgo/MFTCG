#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<cassert>
using namespace std;
typedef long long ll;
typedef unsigned long long ul;
typedef unsigned int ui;
const ll mod = 1000000007;
const ll INF = mod * mod;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef pair<ll, ll> LP;
typedef vector<int> vec;
typedef vector<string> svec;
typedef long double ld;
typedef pair<ld, ld> LDP;
const ld eps = 1e-8;
void solve() {
int n; cin >> n; int l; cin >> l;
int sum = 0;
vector<int> v;
rep1(i, n)sum += l + i - 1,v.push_back(l+i-1);
int mi = mod;
int ans;
rep(i, n) {
int csum = 0;
rep(j, n) {
if (i == j)continue;
csum += v[j];
}
if (abs(sum - csum) < mi) {
mi = abs(sum - csum); ans = csum;
}
}
cout << ans << endl;
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
solve();
return 0;
}

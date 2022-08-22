#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(),(x).end()
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define sum(a) ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
#define mini(a) ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a) ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a,x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a,x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;
using namespace std;
void solve() {
int n;
cin >> n;
int x = floor(1.08 * n);
if(x < 206) {
cout << "Yay!\n";
return;
}
if(x == 206) {
cout << "so-so\n";
return;
}
if(x > 206) {
cout << ":(\n";
return;
}
}
signed main() {
ios::sync_with_stdio(0);
cin.tie(NULL), cout.tie(NULL);
int t = 1;
while(t--) {
solve();
}
}

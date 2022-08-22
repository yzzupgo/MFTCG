#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define ll long long
#define F first
#define S second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define mll unordered_map<ll,ll>
#define dec(v) sort(v.rbegin(),v.rend());
#define REP(i,n) for (int i = 0; i < (n); i++)
#define in(v) for(auto &i:v) cin>>i;
#define out(v) for(auto i:v) cout<<i<<" ";
#define nl cout<<endl;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<ll> vll;
#define deb(x) cout << ">" << #x << '=' << x << endl;
#define setbits(n) __builtin_popcountll(n)
#define done {cout<<"-1"<<endl; return;}
#define inf INT_MAX
#define ninf INT_MIN
const ll N = 1e6 + 10;
#define mod 1000000007
void solveit() {
double n;
cin >> n;
n *= 1.08;
int ans = floor(n);
deb(ans);
if(ans < 206) {
cout << "Yay" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int testcases = 1;
while(testcases--) {
solveit();
}
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define deb(k) cerr << #k << ": " << k << "\n";
#define size(a) (int)a.size()
#define fastcin cin.tie(0)->sync_with_stdio(0);
#define st first
#define nd second
#define pb push_back
#define mk make_pair
#define int long long
typedef long double ldbl;
typedef double dbl;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef vector<int> vint;
#define MAXN 300100
#define MAXLG 20
const int inf = 0x3f3f3f3f;
const ll mod = 1000000007;
const ll linf = 0x3f3f3f3f3f3f3f3f;
const int N = 300100;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool cmp(int a, int b){
	a = a%10, b = b%10;
	if(!a) a = 10;
	if(!b) b = 10;
	return a < b;
}

void solve(){
	int x = 0;
	vint a(5);
	for(int i=0;i<5;i++) cin>>a[i];
	sort(a.rbegin(), a.rend(), cmp);
	for(int i=0;i<5;i++){
		x = (x-1)/10 + 1;
		x = max(x, 0ll);
		x *= 10;

		x += a[i];
	}
	cout<<x - 10<<"\n";


	// Have you read the problem again?
	// Maybe you understood the wrong problem
}

int32_t main(){
	fastcin;
	int t_ = 1;
	//cin>>t_;
	while(t_--)
		solve();
	return 0;
}

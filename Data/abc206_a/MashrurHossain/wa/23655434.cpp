#include <bits/stdc++.h>
using namespace std;
#define fast_cin ios_base::sync_with_stdio(0); cin.tie(NULL); cerr.tie(NULL);
#define sz(a) (int)a.size()
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
typedef long long ll;
typedef double db;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii>vii;
typedef vector<pll>vll;
#define dbg(x) cerr << #x << ": " << x << endl;
#define DBG cerr << __LINE__ << ": I GOT STUCK\n";
void solve() {
int n;
cin >> n;
n *= 1.08;
if(n == 206) {
cout << "so-so" << endl;
} else if(n > 206) {
cout << ": (" << endl;
} else {
cout << "Yay!" << endl;
}
}
int main() {
fast_cin;
cout << fixed;
int test;
test = 1;
while(test--) {
solve();
}
return 0;
}

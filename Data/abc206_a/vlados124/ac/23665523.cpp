#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin() , x.end()
#define ff first
#define ss second
#define pii pair<int , int>
#define rall(x) x.rbegin() , x.rend()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(a) cout << #a << " = " << a << endl;
#define files freopen("input.in", "r", stdin);freopen("input.out", "w", stdout);
#define fff cout << "--------------------------" << endl;
using namespace std;
const int MOD = 1e9 + 7;
const int LOG = 19;
const ll INF = 1e18;
const double PI = acos(-1);
const double EPS = 1e-9;
const int N = 3e5 + 5;
void solve() {
int n;
cin >> n;
if(n < 191) {
cout << "Yay!" << endl;
} else if(n == 191) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
fast
int t = 1;
while(t--) {
solve();
}
return 0;
}

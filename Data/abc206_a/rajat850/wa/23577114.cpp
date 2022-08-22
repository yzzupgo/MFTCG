#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using vi = vector<int>;
using vl = vector<ll>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
const int MOD = 1e9 + 7;
using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
void setIO(string name = "") {
ios_base::sync_with_stdio(0);
cin.tie(0);
if(sz(name)) {
freopen((name + ".in").c_str(), "r", stdin);
freopen((name + ".out").c_str(), "w", stdout);
}
}
int main() {
setIO();
int n;
cin >> n;
int m = (1.08) * (double)n ;
if(m < 206) {
cout << "Yay!";
} else if(m == n) {
cout << "so-so";
} else {
cout << ":(" ;
}
return 0;
}

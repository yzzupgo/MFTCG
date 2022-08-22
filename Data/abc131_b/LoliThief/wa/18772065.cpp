#include <bits/stdc++.h>
#define F first
#define S second
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define in(x) insert(x)
#define sz(s) (int)(s.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define did_you_calis_enough ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define file(s) if (fopen(s".in", "r")) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)
#define int long long
using namespace std;
const int INF = 2147483647;
const int N = 2e5 + 667;
const int mod = 1e9 + 7;
const int BL = 450;
const int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
const double PI = acos(-1.0);
int pw(int a, int n) {
int res = 1;
while (n) {
if (n & 1)
res *= a;
a *= a;
n >>= 1;
}
return res;
}
int lg(int b, int n, int r = 0){
return ((n <= 1)? r : lg(b, n/b,++r));
}
int32_t main() {
did_you_calis_enough
int n, l, sum = 0;
cin >> n >> l;
vector <int> a;
for(int i = 0;i < n;i++){
int t = (l + i);
a.pb(t);
sum += t;
}
int mn = -INF, p = INF;
for(auto i : a){
if(abs(sum - i) > mn){
mn = abs(sum - i);
p = i;
}
}
cout << sum - p;
return 0;
}

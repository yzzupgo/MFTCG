#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define chmin(x,y) x = std::min(x, y)
#define chmax(x,y) x = std::max(x, y)
#define all(v) v.begin(), v.end()
#define rad_to_deg(rad) (((rad)/2/M_PI)*360)
#define deg_to_rad(deg) (((deg)/360)*2*M_PI)
typedef long long ll;
typedef pair<ll, ll> P;
template <typename T>
void dump(const vector<T>& v) {
for(const T& n : v) {
cout << n << " ";
}
cout << endl;
}
template <typename T>
void dump(const vector<vector<T>>& v) {
for(const vector<T>& ns : v) {
for(const T& n : ns) {
cout << n << " ";
}
cout << endl;
}
}
const int INF = (numeric_limits<int>::max)() / 2;
void solve() {
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++) {
for(int j = 0; j <= x; j++) {
int t = i * 2 + j * 4;
if(t == y) {
cout << "Yes" << endl;
return;
}
}
}
cout << "No" << endl;
}
int main() {
int t = 1;
while(t--) {
solve();
}
return 0;
}

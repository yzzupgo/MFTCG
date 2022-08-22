#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(ll i = a; i < b; ++i)
#define REPN(i,a,b) for(ll i = a; i <= b; ++i)
#define REPV(i,a,b) for(ll i = a; i >= b; --i)
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define with_tests int t; cin>>t; while(t--){ solve(); }
#define without_tests solve();
#define all(x) (x).begin(), (x).end()
#define ll long long
#define INF LLONG_MAX
#define ff first
#define ss second
#define max(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })
const int M = 1e9 + 7;
template<typename T>
void print(std::vector<T> &A) {
for(auto &e : A) {
cout << e << " ";
}
cout << "\n";
}
void solve() {
ll n;
cin >> n;
ll price = 1.08 * n;
if(price < 206) {
cout << "Yay\n";
} else if(price > 206) {
cout << ":(\n";
} else {
cout << "so-so\n";
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(NULL);
without_tests;
return 0;
}

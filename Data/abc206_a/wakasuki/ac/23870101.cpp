#include<bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,n) for(ll i=1;i<=(n);++i)
#define rep3(i,i0,n) for(ll i=i0;i<(n);++i)
#define rrep(i,n) for(ll i=((n)-1); i>=0; --i)
#define rrep2(i,n) for(ll i=(n); i>0; --i)
#define pb push_back
#define mod 1000000007
#define fi first
#define se second
#define len(x) ((ll)(x).size())
using namespace std;
using ll = long long;
using ld = long double;
using Pi = pair< ll, ll >;
using vl = vector<ll>;
using vc = vector<char>;
using vb = vector<bool>;
using vs = vector<string>;
using vp = vector<Pi>;
using vvc = vector<vector<char>>;
using vvl = vector<vector<ll>>;
using vvvl = vector<vector<vector<ll>>>;
const ll INF = 1LL << 60;
const ld PI = 3.1415926535897932385;
template<class T>bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T>bool chmin(T &a, const T &b) {
if(b < a) {
a = b;
return 1;
}
return 0;
}
ll gcd(ll a, ll b) {
return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mp make_pair
void printb(ll N, ll d = 16) {
rep(i, d) {
cout << (N / (1 << (d - i - 1))) % 2;
}
cout << endl;
}
void printv(vector<ll>a) {
rep(i, a.size()) {
if(i == a.size() - 1) {
cout << a[i] << endl;
} else {
cout << a[i] << " ";
}
}
}
bool In_map(ll y, ll x, ll h, ll w) {
if(y < 0 || x < 0 || y >= h || x >= w) {
return 0;
} else {
return 1;
}
}
bool compare(Pi a, Pi b) {
if(a.first != b.first) {
return a.first < b.first;
} else {
return a.second < b.second;
}
}
const vector<ll> dx{1, 0, -1, 0};
const vector<ll> dy{0, 1, 0, -1};
int main() {
ll N;
cin >> N;
if(N * 108 / 100 == 206) {
cout << "so-so" << endl;
} else if(N * 1.08 > 206) {
cout << ":(" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}

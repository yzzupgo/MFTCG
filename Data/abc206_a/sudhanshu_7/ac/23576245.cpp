#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector <int> vi;
typedef vector <vi> vii;
typedef vector <string> vs;
typedef vector <ll> vll;
#define LSB(x) x&(-x)
#define endl "\n"
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fl(a,b,c) for(ll (a)=(b);(a)<(c);++(a))
#define fe(a,b) for(auto &(a) : (b))
#define frl(i,a,b) for(ll (i)=(a);(i)>(b);(i)--)
#define r(a,b) fl(a,0,b)
#define v vector
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define tc(t) while(t--)
#define unS unordered_set
#define unM unordered_map
#define oS set
#define lb lower_bound
#define up upper_bound
#define oM map
#define eb emplace_back
#define pq priority_queue
#define print(x) cout<<(x)<<endl
#define MOD 1000000007
template <typename D>
istream &operator>> (istream &in, vector <D> &arr) {
ll n = arr.size();
r(i, n) {
in >> arr[i];
}
return in;
}
template <typename D>
ostream &operator<< (ostream &in, vector <D> &arr) {
for(auto x : arr) {
in << x << " ";
}
in << endl;
return in;
}
template <typename D, typename B>
ostream &operator<< (ostream &in, pair <D, B> &p) {
in << p.f << " " << p.s << endl;
return in;
}
template <typename D, typename B>
istream &operator>> (istream &in, pair <D, B> &p) {
in >> p.f >> p.s;
return in;
}
ll i, j, k, l, x, y, z, m, n, a, b, c, r, d, t = 1, ans;
string s;
template<typename A, typename B> A max(A a, B b) {
return (a > b) ? a : b;
}
template<typename A, typename B> A min(A a, B b) {
return (a < b) ? a : b;
}
void solve(int tc) {
cin >> n;
if(floor((1.08f)*n) < 206) {
print("Yay!");
} else if(floor((1.08f)*n) == 206) {
print("so-so");
} else {
print(":(");
}
}
int main() {
quick;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("error.txt", "w", stderr);
#endif
int k = 1;
tc(t) solve(k++);
return 0;
}

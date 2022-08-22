#ifndef LOCAL
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#endif
#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << '\n'; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
*this << "[";
for (auto it = d.b; it != d.e; ++it)
*this << ", " + 2 * (it == d.b) << *it;
ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
typedef tree< pair<int,int>, null_type, less<pair<int,int> >, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef long long ll;
typedef long double ld;
const ll MOD = (ll)1e9 + 7 ;
const ll INF = (ll)1e18 + 10 ;
#define pb push_back
#define all(x) x.begin(),x.end()
#define allr(x) x.begin(),x.end()
#define vl vector<ll>
#define sz(x) (ll)x.size()
#define vll vector<vector<ll> >
#define ins insert
#define endl '\n'
#define pq priority_queue<ll, vector<ll> , greater<ll> >
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int main(){
speed;
ll x,y;
cin >> x >> y;
for( ll i = 0; i <= x; i++ ){
for( ll j = 0; j <= x; j++ ){
if( i + j == x && i * 2 + j * 4 == y ){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}

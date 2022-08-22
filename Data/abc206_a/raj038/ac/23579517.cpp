#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type , less<int> , rb_tree_tag , tree_order_statistics_node_update>
#define int long long int
#define ull unsigned long long
#define pb push_back
#define inf 1e18
#define mk make_pair
#define ld long double
#define mod 1000000007
#define fi first
#define se second
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t; cin>>t; while(t--)
#define setbits __builtin_popcount
#define endl '\n'
#define LOCAL
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge {
c b, e;
};
sim > rge<c> range(c i, c j) {
return rge<c> {i, j};
}
sim > auto dud(c *x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() {
cerr << endl;
}
eni( !=) cerr << boolalpha << i;
ris;
}
eni( ==) ris << range(begin(i), end(i));
}
sim, class b dor(pair < b, c > d) {
ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
*this << "[";
for(auto it = d.b; it != d.e; ++it) {
*this << ", " + 2 * (it == d.b) << *it;
}
ris << "]";
}
#else
sim dor(const c &) {
ris;
}
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
int32_t main() {
fastIO;
int n;
cin >> n;
int val = floor((ld)n * (ld)(1.08));
if(val < 206) {
cout << "Yay!\n";
} else if(val == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}

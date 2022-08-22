#include <bits/stdc++.h>
#define int long long int
#define ii pair<int,int>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
using namespace std;
#define output(x) for (auto a:x) cout<<a<<" ";cout<<endl;
#define output2(x) for (auto a:x) cout<<a.fi<<" "<<a.se<<endl;
#define PI 3.14159265
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
~debug() { cerr << endl; }
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
#define MOD 1000000007
int power(int x,int y,int mod = MOD)
{
int ret = 1;
x = x % mod;
while (y){
if(y&1) ret = (ret*x)%mod;
y = y>>1;
x = (x*x)%mod;
}
return ret%mod;
}
void solve()
{
int x,y;
cin>>x>>y;
if (y%2 == 0 && (y<=4*x && y>=2*x)){
cout<<"Yes";
}
else cout<<"No";
}
signed main(){
solve();
}

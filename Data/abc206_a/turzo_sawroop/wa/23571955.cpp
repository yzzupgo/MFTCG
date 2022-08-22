#include<bits/stdc++.h>
using namespace std;
#define fb find_by_order
#define ok order_of_key
#define mem(x,y) memset(x,y,sizeof x)
typedef long long ll;
typedef int ii;
typedef pair<ll, ll> pi;
typedef vector<pi> vii;
#define map unordered_map
#define INF 1000000000000007
#define pi 3.141592654
#define T while(t--)
#define for2(i,a,b) for(i=a;i>=b;i--)
#define for3(i,a,b) for(i=a;i<=b;i=i+2)
#define for1(i,a,b) for(i=a;i<=b;i=i+1)
#define for4(i,a,b) for(i=a;i>=b;i=i-2)
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define si set<ll>
#define se multiset<ll>
typedef double ld;
typedef vector<ll> vi;
#define all(v) sort(v.begin(),v.end())
#define all1(v) sort(v.rbegin(),v.rend())
#define pff(uuv) printf("%lld\n",uuv)
#define pf1(uu) printf("%.20Lf\n",uu)
bool comp(pair<ll, char> aa, pair<ll, char> bb) {
if(aa.ff != bb.ff) {
return aa.ff > bb.ff;
}
return aa.ss < bb.ss;
}
bool comp1(pair<ll, char> aa, pair<ll, char> bb) {
if(aa.ff != bb.ff) {
return aa.ff < bb.ff;
}
return aa.ss > bb.ss;
}
bool comp2(pair<ll, ll> aa, pair<ll, ll> bb) {
if(aa.ff != bb.ff) {
return aa.ff > bb.ff;
}
return aa.ss < bb.ss;
}
bool comp3(pair<ll, ll> aa, pair<ll, ll> bb) {
if(aa.ff != bb.ff) {
return aa.ff < bb.ff;
}
return aa.ss > bb.ss;
}
ll rup(ll ik, ll ikk) {
if(ik % ikk == 0) {
return ik / ikk;
} else {
return (ik / ikk) + 1;
}
}
ll gcd(ll a, ll b) {
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
return (a * b) / gcd(a, b);
}
ii main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll t = 1;
while(t--) {
ld n;
cin >> n;
n *= 1.08;
n - ll(n);
if(n < 206) {
cout << "Yay!\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
}

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define IOS \
ios::sync_with_stdio(0); \
cin.tie(0); \
cout.tie(0)
#define ceil(x) static_cast<ll>(ceil(x))
#define floor(x) static_cast<ll>(floor(x))
#define pow(x,y) static_cast<ll>(pow(x, y))
#define gcd(x,y) static_cast<ll>(__gcd(x, y))
#define lcm(x,y) static_cast<ll>(a * (b / gcd(x, y)))
#define F first
#define S second
#define eb emplace_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define FI(i,a,b) for (ll i{a}; i <= b; i++)
#define FD(i,a,b) for (ll i{a}; i >= b; i--)
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<pair<ll, ll>> vpii;
typedef pair<ll, ll> pi;
const ll mod{static_cast<ll>(1e9) + 7};
const ld Pi{3.14159265358979323846};
auto int_from(istream &in) -> int {
int x;
in >> x;
return x;
}
auto lng_from(istream &in) -> ll {
ll x;
in >> x;
return x;
}
auto str_from(istream &in) -> string {
string x;
in >> x;
return x;
}
auto chr_from(istream &in) -> char {
char x;
in >> x;
return x;
}
int main() {
IOS;
int n{int_from(cin)};
if(floor(1.08 * n) < 206) {
cout << "Yay!";
} else if(floor(1.08 * n) > 206) {
cout << ": (";
} else if(floor(1.08 * n) == 206) {
cout << "so-so";
}
return 0;
}

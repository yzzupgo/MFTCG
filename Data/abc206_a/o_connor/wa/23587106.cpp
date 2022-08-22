#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define endl "\n"
#define mp make_pair
#define HCF __gcd
#define LCM(m,n) (m*n)/__gcd(m,n)
#define maxa(v) *(max_element(all(v))
#define mina(v) *(min_element(all(v))
#define vi vector<ll>
#define pll pair<ll,ll>
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define M 998244353ll
#define S second
#define F first
#define inf (int)1e9
#define fon(i,j,n) for(ll i=j;i<(n);++i)
#define all(x) (x).begin(),(x).end()
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define sz(x) (int)((x).size())
#define asort(v) sort(v.begin(),v.end())
#define dsort(v) sort(v.begin(),v.end(),greater<int>())
#define BS(v,k) binary_search(v.begin(),v.end(),k)
#define UB(v,k) (upper_bound(v.begin(),v.end(),k)-v.begin())
#define LB(v,k) (lower_bound(v.begin(),v.end(),k)-v.begin())
#define mod 1000000007ll
using namespace std;
bool prime(ll n) {
bool b = true;
for(ll i = 2; i <= sqrt(n); i++) {
if(n % i == 0) {
b = false;
break;
}
}
if(b) {
return true;
} else {
return false;
}
}
void solve() {
ll n;
cin >> n;
ll ans = floor(1.08 * n);
if(ans > 206) {
cout << ":(";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << "Yay";
}
return;
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int tsc = 1;
while(tsc--) {
solve();
cout << endl;
}
return 0;
}

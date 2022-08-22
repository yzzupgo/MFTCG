#pragma GCC optimize("Ofast")
#pragma GCC target("avx")
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,n) for(ll i=0; i<n; ++i)
#define REP(i,n) for(ll i=1; i<=n; ++i)
#define Rep(i,s,n) for(ll i=s; i<n; ++i)
using namespace std;
ll gcd(ll a, ll b) {
if(b == 0) {
return 0;
}
return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
return (ll)a / gcd(a, b) * b;
}
bool is_prime(ll n) {
for(ll i = 2; i * i <= n; i++) {
if(n % i == 0) {
return false;
}
}
return true;
}
int main() {
int n;
cin >> n;
int x = n * 1.08;
if(x > 206) {
cout << ":(" << endl;
} else if(x < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}

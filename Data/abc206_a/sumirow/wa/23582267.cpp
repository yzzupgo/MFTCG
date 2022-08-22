#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN
#include __FILE__
using namespace std;
int main() {
ll n;
cin >> n;
n = n * 1.08;
string ans = "Yay!";
if(n == 206) {
ans == "so-so";
} else if(n > 206) {
ans = ":( ";
}
cout << ans << endl;
}
#else
#include <bits/stdc++.h>
using ll = long long;
const ll MOD = 1000000007;
const long long INF = 1LL << 60;
template<class T> void chmin(T &a, T b) {
if(a > b) {
a = b;
}
}
template<class T> void chmax(T &a, T b) {
if(a < b) {
a = b;
}
}
ll gcd(ll a, ll b) {
if(a % b == 0) {
return b;
} else {
return gcd(b, a % b);
}
}
ll lcm(ll a, ll b) {
ll g = gcd(a, b);
b = b / g;
a = a / g;
return a * b * g;
}
double calcDist(double x1, double y1, double x2, double y2) {
return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
long long pow(long long x, long long n) {
long long ret = 1;
while(n > 0) {
if(n & 1) {
ret = ret * x % MOD;
}
x = x * x % MOD;
n >>= 1;
}
return ret;
}
#endif

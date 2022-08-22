#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<bitset>
#include <cmath>
#include<string>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define T int t, q=0; scanf("%d", &t); while(q++<t)
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll x, y, z, r, b = 0, a, c = 0, d = 0, v, u, f, sum, ans, total, n, m, k, p, kase, i, r2, r3;
#define PI acos(-1)
#define MX 1000000001
#define MAX 1000006
#define vs vector<string>
#define pi 3.14159265358979323846
const int MAX1 = -1e11;
const ll xx = 1e9 + 7;
ll tow(ll a, ll b) {
ll ans = 1;
while(b > 0) {
if(b % 2) {
ans = (ans * a) % xx;
}
a = (a * a) % xx;
b /= 2;
}
return ans;
}
ll lcm(ll a, ll b) {
return (a * b) / __gcd(a, b);
}
ll gcd(ll n1, ll n2) {
while(n1 != n2) {
if(n1 > n2) {
n1 -= n2;
} else {
n2 -= n1;
}
}
return n1;
}
ll Reverse(ll n) {
ll a = 0;
while(n > 0) {
a = (a * 10) + (n % 10);
n /= 10;
}
return a;
}
bool IsPrime(int n) {
if(n < 2) {
return false;
}
for(long long i = 2; i * i <= n; i++) {
if(n % i == 0) {
return false;
}
}
return true;
}
double LOgg(long long int base, long long int num) {
return log((double) num) / log((double) base);
}
bool IsPrime(ll n) {
if(n == 0 || n == 1) {
return false;
} else {
for(int i = 2; i <= sqrt(n); i++) {
if(n % i == 0) {
return false;
}
}
}
return true;
}
bool sortbysecdesc(const pair<ll, ll> &a,
const pair<ll, ll> &b) {
return a.second > b.second;
}
ll getSmallestInteger(ll arr[], ll n) {
ll output = 1;
for(ll i = 0; i < n && arr[i] <= output; i++) {
output = output + arr[i];
}
return output;
}
double dist(double a1, double b1, double c1) {
return sqrt((a1 - x) * (a1 - x) + (b1 - y) * (b1 - y) + (c1 - z) * (c1 - z));
}
#define N 400005
#define mod 1000000007
int main() {
double a, b = 1.08, c;
cin >> a;
a *= b;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}

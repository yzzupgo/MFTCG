#include<bits/stdc++.h>
#define ll long long
#define inf 1000000007
using namespace std;
void make_fast() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
}
int gcd(int a, int b) {
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
bool isPrime(int n) {
if(n <= 1) {
return false;
}
if(n <= 3) {
return true;
}
if(n % 2 == 0 || n % 3 == 0) {
return false;
}
for(int i = 5; i * i <= n; i = i + 6)
if(n % i == 0 || n % (i + 2) == 0) {
return false;
}
return true;
}
bool sortbysec(const pair<ll int, ll int> &a, const pair<ll int, ll int> &b) {
return (a.second * a.first < b.second * b.first);
}
void sieve(vector<ll int> &spf, ll int &MAXN) {
spf[1] = 1;
for(ll int i = 2; i < MAXN; i++) {
spf[i] = i;
}
for(ll int i = 4; i < MAXN; i += 2) {
spf[i] = 2;
}
for(ll int i = 3; i * i < MAXN; i++) {
if(spf[i] == i) {
for(ll int j = i * i; j < MAXN; j += i)
if(spf[j] == j) {
spf[j] = i;
}
}
}
}
int isPalindrome(string str) {
int l = 0;
int h = str.size() - 1;
while(h > l) {
if(str[l++] != str[h--]) {
return 0;
}
}
return 1;
}
unsigned long long power(unsigned long long x,
ll int y, ll int p) {
unsigned long long res = 1;
x = x % p;
while(y > 0) {
if(y & 1) {
res = (res * x) % p;
}
y = y >> 1;
x = (x * x) % p;
}
return res % inf;
}
unsigned long long modInverse(unsigned long long n,
ll int p) {
return power(n, p - 2, p);
}
unsigned long long nCrModPFermat(unsigned long long n,
ll int r, ll int p) {
if(n < r) {
return 0;
}
if(r == 0) {
return 1;
}
unsigned long long fac[n + 1];
fac[0] = 1;
for(int i = 1; i <= n; i++) {
fac[i] = (fac[i - 1] * i) % p;
}
return (fac[n] * modInverse(fac[r], p) % p
* modInverse(fac[n - r], p) % p)
% p;
}
ll divisors[1000011];
void pre() {
for(int i = 1; i <= 1000001; ++i)
for(int j = i; j <= 1000001; j += i) {
++divisors[j];
}
}
ll int solve(string &s, ll int i, ll int p) {
if(i < 0) {
return 0;
} else {
if(s[i] == '?') {
return 1 + solve(s, i - 1, 0) + solve(s, i - 1, 1);
} else if(s[i] == '1') {
return 1 + solve(s, i - 1, 0);
} else {
return 1 + solve(s, i - 1, 1);
}
}
}
int main() {
make_fast();
ll int t = 1, test = 0;
test = t;
while(t--) {
ll int n = 0, i = 0, z = 0, m = 0, j = 0, k = 0, y = 0, x = 0, count = 0, a = 0, b = 0, c = 0, d = 0, pos = 0, maxi = 2, p = 0, mini = inf;
cin >> n;
n = (n * 108) / 100;
if(n == 206) {
cout << "so-so" << endl;
} else if(n > 206) {
cout << ":(" << endl;
} else {
cout << "Yay !" << endl;
}
}
}

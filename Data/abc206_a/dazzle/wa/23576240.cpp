#pragma GCC optimize("-Ofast","-funroll-all-loops")
#include <bits/stdc++.h>
#define ll long long int
#define dd long double
#define pi 3.141592653
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define mod 1000000007
#define endl "\n"
using namespace std;
ll CeilIndex(std::vector<ll> &v, ll l, ll r, ll key) {
while(r - l > 1) {
int m = l + (r - l) / 2;
if(v[m] >= key) {
r = m;
} else {
l = m;
}
}
return r;
}
ll LIS(std::vector<ll> &v) {
if(v.size() == 0) {
return 0;
}
std::vector<ll> tail(v.size(), 0);
int length = 1;
tail[0] = v[0];
for(size_t i = 1; i < v.size(); i++) {
if(v[i] < tail[0]) {
tail[0] = v[i];
} else if(v[i] > tail[length - 1]) {
tail[length++] = v[i];
} else {
tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i];
}
}
return length;
}
bool isPerfectSquare(long double x) {
if(x >= 0) {
long double sr = sqrt(x);
return (sr * sr == x);
}
return false;
}
ll power(ll x, ll y) {
ll res = 1;
x = x % mod;
if(x == 0) {
return 0;
}
while(y > 0) {
if(y & 1) {
res = (res * x) % mod;
}
y = y >> 1;
x = (x * x) % mod;
}
return res;
}
bool ispalindrome(string s) {
int l = s.length();
int j;
for(int i = 0, j = l - 1; i <= j; i++, j--) {
if(s[i] != s[j]) {
return false;
}
}
return true;
}
vector<ll> ThreeEqualParts(vector<ll> A) {
ll imp[] = {-1, -1};
vector<ll> IMP(imp, imp + 2);
ll Sum = accumulate(A.begin(),
A.end(), 0);
if(Sum % 3) {
return IMP;
}
ll K = Sum / 3;
if(K == 0) {
return {0, (ll)A.size() - 1};
}
vector<ll> interval;
ll S = 0;
for(ll i = 0 ; i < A.size(); i++) {
ll x = A[i];
if(x) {
S += x;
if(S == 1 or S == K + 1 or S == 2 * K + 1) {
interval.push_back(i);
}
if(S == K or S == 2 * K or S == 3 * K) {
interval.push_back(i);
}
}
}
ll i1 = interval[0], j1 = interval[1],
i2 = interval[2], j2 = interval[3],
i3 = interval[4], j3 = interval[5];
vector<ll> a(A.begin() + i1, A.begin() + j1 + 1);
vector<ll> b(A.begin() + i2, A.begin() + j2 + 1);
vector<ll> c(A.begin() + i3, A.begin() + j3 + 1);
if(!((a == b) and (b == c))) {
return {-1, -1};
}
ll x = i2 - j1 - 1;
ll y = i3 - j2 - 1;
ll z = A.size() - j3 - 1;
if(x < z or y < z) {
return IMP;
}
j1 += z;
j2 += z;
return {j1, j2 + 1};
}
ll power(ll x, unsigned int y, ll p) {
ll res = 1;
x = x % p;
if(x == 0) {
return 0;
}
while(y > 0) {
if(y & 1) {
res = (res * x) % p;
}
y = y >> 1;
x = (x * x) % p;
}
return res;
}
const int N = 1000001;
ll Substr(string s2, string s1) {
ll counter = 0;
ll i = 0;
for(; i < s1.length(); i++) {
if(counter == s2.length()) {
break;
}
if(s2[counter] == s1[i]) {
counter++;
} else {
if(counter > 0) {
i -= counter;
}
counter = 0;
}
}
return counter < s2.length() ? -1 : i - counter;
}
ll isSubstring(string s1, string s2) {
ll M = s1.length();
ll N = s2.length();
for(ll i = 0; i <= N - M; i++) {
ll j;
for(j = 0; j < M; j++)
if(s2[i + j] != s1[j]) {
break;
}
if(j == M) {
return i;
}
}
return -1;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t = 1;
while(t--) {
ll a, b;
cin >> a;
b = 1.08 * a;
if(b < 206) {
cout << "Yay!";
} else if(b == 206) {
cout << "so-so";
} else {
cout << ':' << ' ' << '(';
}
}
return 0;
}

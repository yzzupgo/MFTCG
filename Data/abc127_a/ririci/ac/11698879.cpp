#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <stack>
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBAC
using namespace std;
ll gcd(ll a, ll b) {
ll c;
if (a < b) {
c = a; a = b; b = c;
}
while (b != 0) {
c = a % b; a = b; b = c;
}
return a;
}
ll lcm(ll a, ll b) {
ll c;
c = a * b / gcd(a, b);
return c;
}
int sort_greater(int m,int n) {
vector<int> a(m);
for (int i = 0; i < m; i++) {
cin >> a[i];
}
sort(a.begin(), a.end(),greater<int>());
for (int i = 0; i < n; i++) {
cout << a[i];
}
return 0;
}
int bubblesort(int a[], int n) {
int sw = 0;
bool flag = 1;
for (int i = 0; flag; i++) {
flag = 0;
for (int j = n - 1; j >= i + 1; j--) {
if (a[j] < a[j - 1]) {
swap(a[j], a[j - 1]);
flag = 1;
sw += 1;
}
}
}
return sw;
}
int a_z()
{
for (int i = 0; i <= ('Z' - 'A'); i++) {
cout << (char)('A' + i);
}
return 0;
}
int selecttionsort(int a[], int n) {
int t,sw = 0, minj;
for (int i = 0; i < n - 1; i++) {
minj = i;
for (int j = 0; j < n - 1; j++) {
if (a[j] < a[minj]) {
minj = j;
}
}
t = a[i]; a[i] = a[minj]; a[minj] = t;
if (i != minj) sw += 1;
}
return sw;
}
bool is_prime(int x) {
if (x <= 1) return false;
for (int i = 2; i * i <= x; i++) {
if (x % i == 0) return false;
}
return true;
}
const ll mod = 1000000007;
struct mint {
ll x;
mint(ll x = 0):x(x%mod){}
mint& operator+=(const mint a) {
if ((x += a.x) >= mod) x -= mod;
return *this;
}
mint& operator-=(const mint a) {
if ((x += mod - a.x) >= mod) x -= mod;
return *this;
}
mint& operator*=(const mint a) {
(x *= a.x) %= mod;
return *this;
}
mint operator+(const mint a) const {
mint res(*this);
return res += a;
}
mint operator-(const mint a) const {
mint res(*this);
res -= a;
}
mint operator*(const mint a)const {
mint res(*this);
return res *= a;
}
};
map<string, int> memo;
using P=pair<int, int>;
struct Clock {
int hour, minute, second;
void set(int h, int m, int s) {
hour = h; minute = m; second = s;
}
string to_str() {
string h, m, s;
h = to_string(hour);
m= to_string(minute);
s= to_string(second);
if (h.size() < 2) h = "0" + h;
if (m.size() < 2) m = "0" + m;
if (s.size() < 2) s = "0" + s;
return h + ":" + m + ":" + s;
}
void shift(int diff_second) {
int h, m;
h = diff_second / 3600;
m = diff_second / 60;
diff_second %= 60;
second += diff_second;
}
};
int main() {
int a, b;
cin >> a >> b;
if (a >= 13)cout << b;
else if (a >= 6)cout << b / 2;
else cout << 0;
return 0;
}

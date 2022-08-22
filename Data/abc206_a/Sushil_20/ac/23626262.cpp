#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(p,n) for (int i = p; i < n; i++)
#define test() \
int t; \
cin >> t; \
while (t-- > 0)
#define speed \
ios_base::sync_with_stdio(false); \
cin.tie(NULL); \
cout.tie(NULL);
#define endl "\n"
#define mp make_pair
#define pb push_back
#define mod 1000000007
int countDigits(long l) {
if(l >= 1000000000000000000L) {
return 19;
}
if(l >= 100000000000000000L) {
return 18;
}
if(l >= 10000000000000000L) {
return 17;
}
if(l >= 1000000000000000L) {
return 16;
}
if(l >= 100000000000000L) {
return 15;
}
if(l >= 10000000000000L) {
return 14;
}
if(l >= 1000000000000L) {
return 13;
}
if(l >= 100000000000L) {
return 12;
}
if(l >= 10000000000L) {
return 11;
}
if(l >= 1000000000L) {
return 10;
}
if(l >= 100000000L) {
return 9;
}
if(l >= 10000000L) {
return 8;
}
if(l >= 1000000L) {
return 7;
}
if(l >= 100000L) {
return 6;
}
if(l >= 10000L) {
return 5;
}
if(l >= 1000L) {
return 4;
}
if(l >= 100L) {
return 3;
}
if(l >= 10L) {
return 2;
}
return 1;
}
bool isPrime(ll n) {
if(n == 2) {
return true;
}
for(int i = 2; i <= sqrt(n); i++)
if(n % i == 0) {
return false;
}
return true;
}
bool palindrome(string s) {
int i = 0;
int j = s.size() - 1;
while(j > i) {
if(s[i] != s[j]) {
return false;
}
}
return true;
}
ll bin(ll a, ll b) {
ll ans = 1;
while(b != 0) {
if(b % 2) {
ans = (ans % mod * a % mod) % mod;
b--;
} else {
a = (a % mod * a % mod) % mod;
b = b / 2;
}
}
return ans;
}
ll ncr(ll n, ll k) {
ll ans = 1;
if(k > n - k) {
k = n - k;
}
for(ll i = 1; i <= k; i++) {
ans = (ans * (n - i + 1)) % mod;
ans = (ans * bin(i, mod - 2)) % mod;
}
return ans;
}
string toBinary(ll n, ll k) {
string binary = bitset<32>(n).to_string();
int i = 0;
return binary.substr(binary.length() - k);
}
int main() {
speed;
double n;
cin >> n;
if(int(n * 1.08) < 206) {
cout << "Yay!";
} else if(int(n * 1.08) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}

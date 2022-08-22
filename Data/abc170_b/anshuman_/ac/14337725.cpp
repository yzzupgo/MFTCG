#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long
#define MOD 1000000007
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define loop(I,N) for(int i=I;i<N;i++)
#define sortvec(V) sort(V.begin(),V.end())
#define vec vector<int>
#define endl "\n"
using namespace std;
#define PI 3.14159265359
int fast_power(int base, int power) {
int result = 1;
while (power > 0) {
if (power & 1) {
result = (result * base) % MOD;
}
base = (base * base) % MOD;
power = power >> 1;
}
return result % MOD;
}
bool isPrime(int x) {
for (int i = 2; i <= sqrt(x); i++) {
if (x % i == 0)
return false;
}
if (x == 1)
return false;
return true;
}
int binsearch(int a[], int f, int r, int x) {
while (f <= r) {
int mid = (f + r) / 2;
if (a[mid] == x)
return mid;
else if (a[mid] > x) {
r = mid - 1;
}
else {
f = mid + 1;
}
}
return -1;
}
void sieve(int a[], int n) {
a[0] = 0;
a[1] = 0;
for (int i = 2; i <= n; i++) {
if (a[i] == 1) {
for (int j = i + i; j <= n; j += i) {
a[j] = 0;
}
}
}
}
int32_t main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
int t = 1;
while (t--) {
int n, k;
cin >> n >> k;
if(k%2==1){
cout << "No\n";
}
else if (n * 2 <= k && n * 4 >= k) {
cout << "Yes\n";
}
else
cout << "No\n";
}
return 0;
}

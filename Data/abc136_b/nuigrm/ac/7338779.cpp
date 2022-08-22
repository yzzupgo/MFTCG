#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long mod = 1e9 + 7;
ll gcd(ll a, ll b) {
return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
int main() {
int n;
cin >> n;
ll ans = 0;
for (int i = 1; i <= n; i++) {
string s = to_string(i);
if (s.size() % 2 == 1) {
ans++;
}
}
cout << ans << endl;
}

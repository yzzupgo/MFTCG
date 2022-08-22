#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
ll gcd(ll a, ll b) {
return (b == 0 ? a : gcd(b, a % b));
}
ll lcm(ll a, ll b) {
return ((a * b) / gcd(a, b));
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ld n;
cin >> n;
cout << ceil(-0.5 + pow(1 + 8 * n, 0.5) * 0.5);
return 0;
}

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
ll n;
cin >> n;
ll k = floor(1.08 * n);
if(k < 206) {
cout << "Yay!";
} else if(k == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}

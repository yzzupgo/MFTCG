#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 10000007;
const ll mod = 1e9 + 7;
#define gcd(a,b) __gcd((a), (b))
#define lcm(a,b) ((a) / __gcd((a), (b)) * (b))
int main() {
ll n, t;
cin >> n >> t;
for (ll i = 0; i <= n; i++) {
for (ll j = 0; j <= n; j++) {
if((((i * 4) + (j * 2)) == t) || ((i*2) + (j * 4) == t )&& (i + j == n)) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}

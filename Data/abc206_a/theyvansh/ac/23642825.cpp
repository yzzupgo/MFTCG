#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
using namespace std;
ll MOD = 1e9 + 7;
ll mpow(ll base, ll exp) {
base %= MOD;
ll result = 1;
while(exp > 0) {
if(exp & 1) {
result = ((ll)result * base) % MOD;
}
base = ((ll)base * base) % MOD;
exp >>= 1;
}
return result;
}
void solver() {
double n;
cin >> n;
if((ll)(n * 1.08) < 206) {
cout << "Yay!\n";
} else if((ll)(n * 1.08) == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
int main() {
ios_base::sync_with_stdio(NULL);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll t = 1;
while(t--) {
solver();
}
return 0;
}

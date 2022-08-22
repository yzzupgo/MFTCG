#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;
void Solve();
void Solve() {
long double n;
cin >> n;
long double x = n * 1.08;
if(floor(x) == 206) {
cout << "so-so\n";
} else if(floor(x) < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
int main() {
ios_base::sync_with_stdio();
cin.tie(nullptr);
int T = 1;
while(T--) {
Solve();
}
}

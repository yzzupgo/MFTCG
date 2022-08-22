#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;
int ar[Max];
void Solve() {
int n;
cin >> n;
for(int i = 1; i <= n; ++i) {
cin >> ar[i];
}
int cnt = 0, mx = 0;
map<int, int> mp;
for(int i = 1; i <= n / 2; ++i) {
if(ar[i] != ar[n - i + 1]) {
cnt++;
mp[ar[i]]++;
mp[ar[n - i + 1]]++;
mx = max(mx, max(mp[ar[i]], mp[ar[n - i + 1]]));
}
}
if(cnt == 0) {
cout << "0\n";
return;
}
cout << min(cnt, (int) mp.size() - 1) << endl;
}
int main() {
ios_base::sync_with_stdio();
cin.tie(nullptr);
int T = 1;
while(T--) {
Solve();
}
}

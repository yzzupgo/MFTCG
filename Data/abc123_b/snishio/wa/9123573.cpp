#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> v(5),d(5);
  ll pos = 0;
  for (ll i = 0; i < 5; ++i) {
    cin >> v[i];
    double a = v[i]/10.0;
    d[i] = 10*(ceil(a));
  }
  for (ll i = 1; i < 5; ++i) 
    if (d[i]-v[i] > d[i-1] - v[i-1]) pos = i;
  
  ll ans = 0;
  for (ll i = 0; i < 5; ++i) {
    if (i == pos) ans += v[i];
    else ans += d[i];
  }
  cout << ans << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> P;
typedef vector<int> VI;
const ll MOD = 1000000007;
#define REP(i,n) for(int i = 0; i < n; i++)
#define ALL(v) v.begin(), v.end()
int main() {
int n;
cin >> n;
int ans = 0;
if (n >= 9) {
ans += 9;
if (n >= 999) {
ans += 900;
if (n >= 99999) {
ans += 90000;
}
else if (n >= 9999)
ans += n - 9999;
}
else if(n >= 99)
ans += n - 99;
}
else
ans += n;
cout << ans;
}

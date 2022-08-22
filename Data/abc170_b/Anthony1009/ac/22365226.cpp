#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(v) begin(v), end(v)
using namespace std;
using P = pair<int,int>;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
ll ll_pow(ll a, ll n) {
ll ans = 1;
for(ll i = 0; i < n; i++) ans *= a;
return ans;
}
int main() {
int x,y;
cin >> x >> y;
if(2*x <= y && y <= 4*x && y%2 == 0 ) cout << "Yes" <<endl;
else cout << "No" <<endl;
return 0;
}

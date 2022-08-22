#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define all(v) v.begin(), v.end()
typedef long long ll;
ll GCD(ll x, ll y) {
if (y == 0) return x;
else return GCD(y, x % y);
}
ll LCM(ll x, ll y) {
return x * y / GCD(x, y);
}
int main(){
int n; cin >> n;
int res = 0;
if(n < 10) {
cout << n << endl;
return 0;
}
else res += 9;
if(n < 100) {
cout << res << endl;
return 0;
}
else if(n < 1000) res += n - 99;
else res += 900;
if(n < 10000) {
cout << res << endl;
return 0;
}
res += n - 9999;
if(n == 100000) res--;
cout << res << endl;
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i,n) ; for(ll i = 0; i < (ll)n; i++)
int main() {
ll a,b; cin >> a >> b;
ll x,y,z;
x = a+b;
y = x-b;
z = x*b;
cout << max(x, max(y,z)) << endl;
}

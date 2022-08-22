#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define long long long
int main(void) {
ll n, l;
cin >> n >> l;
ll s = 0, m = 1e9;
for(ll i=0; i<n; i++) {
ll x = l + i;
m = min(m, abs(x));
s += x;
}
cout << s - m << endl;
}

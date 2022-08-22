#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i,n) ; for(ll i = 0; i < (ll)n; i++)
int main() {
int a,b; cin >> a >> b;
if(a>=13) cout << b << endl;
else if(a<5) cout << 0 << endl;
else cout << b/2 << endl;
}

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<n; i++)
typedef long long ll;
ll mod = 1000000007;
void solve(){
int a,b;
cin >> a >> b;
int ans;
if(a>=13) ans = b;
else if(a>=6) ans = b/2;
else ans = 0;
cout << ans << endl;
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
solve();
return 0;
}

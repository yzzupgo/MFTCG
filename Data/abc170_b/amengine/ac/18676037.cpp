#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << " : " << x << endl;
void solve(){
ll x, y;
cin >> x >> y;
for(ll i = 0; i <= 100; ++i)
for(ll j = 0; j <= 100; ++j){
if(4 * i + 2 * j == y && i + j == x){
cout << "Yes\n";
return;
}
}
cout << "No\n";
}
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
solve();
return 0;
}

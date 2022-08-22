#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
const ll INF = 1e14;
void solve(){
int x, y; cin >> x >> y;
if(((4*x - y >= 0 ? 4*x - y : 1) % 2 == 0) && ((y - 2*x >= 0 ? y - 2*x : 1) % 2 == 0))
cout << "YES";
else cout << "NO";
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const double PI = 3.141592653589793238460;
const int mod = 1e9+7;
const int INF = (int)1e18;
void FAST(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
void solve(){
int x, y;
cin >> x >> y;
for(int a = 0; a <= x; a++){
int b = x - a;
if(2 * a + 4 * b == y){
cout << "Yes\n";
return;
}
}
cout << "No\n";
}
int32_t main(){
FAST();
int t = 1;
while(t--){
solve();
}
return 0;
}

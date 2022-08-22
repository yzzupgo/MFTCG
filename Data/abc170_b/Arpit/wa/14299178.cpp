#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long int li;
void solve(){
int X, Y, x, y;
bool ans = 0;
cin >> X >> Y;
if(Y % 2 == 0){
y = Y / 2 - X;
if(X - y >= 0) ans = 1;
}
cout << (ans == 1 ? "Yes" : "No") << '\n';
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t = 1;
while(t--) solve();
}

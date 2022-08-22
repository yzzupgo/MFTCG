#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
ll x, y, c, t;
cin >> x >> y;
if(y < 2*x){
cout << "No" << endl;
return;
}
t = (y-2*x)/2;
c = x-t;
if(c + t == x && 2*c + 4*t == y && c >= 0 && t >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
solve();
return 0;
}

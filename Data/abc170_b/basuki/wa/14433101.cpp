#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
ll x, y, c, t;
cin >> x >> y;
t = (y-2*x)/2;
c = x-t;
if(t >=0 && c >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
solve();
return 0;
}

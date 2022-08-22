#include<bits/stdc++.h>
using namespace std;
using ll = long;
int main(){
ll ans = 0 ,last = 0;
for(ll i = 0; i < 5; i++){
    ll a;
    cin >> a;
    ans += (a + 9) / 10 * 10;
    last = max(last, (1000 - a) % 10);
}
cout << ans - last;
}
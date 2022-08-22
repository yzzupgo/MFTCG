#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
    vector<pair<ll, ll>> v(5); 
    for(ll i=0; i<5; i++){
        ll n; cin >> n;
        ll m = n%10; if(m == 0) m = 10;
        v[i] = make_pair(m, n);
    }
    sort(v.rbegin(), v.rend());

    ll ans = 0;
    for(ll i=0; i<5; i++){
        if(i == 4) ans += v[i].second;
        else ans += v[i].second + 10 - v[i].first;
    }

    cout << ans << endl;
}
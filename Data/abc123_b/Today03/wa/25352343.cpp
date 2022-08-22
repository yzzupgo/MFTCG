#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main(){
    vector<pair<ll, ll>> v(5); 
    for(ll i=0; i<5; i++){
        ll n; cin >> n;
        ll m = 10 - n%10;
        v[i] = make_pair(m, n);
    }
    sort(v.begin(), v.end());

    ll ans = 0;
    for(ll i=0; i<5; i++){
        if(i == 4) ans += v[i].second;
        else ans += v[i].second + v[i].first;
    }

    cout << ans << endl;
}
#include <iostream>
#include "bits/stdc++.h"

using namespace std;
#define print(x) cout<<x<<endl;
#define rep(i, a, b) for(ll i=a;i<b;i++)
#define REP(i, a) for(ll i=0;i<a;i++)
#define jkl ll debug = 0;
#define RREP(i, a) for(ll i=a;i>0;i--)
#define rrep(i, a, b) for(ll i=a-1;i>=b;i--)
#define printall(n, array) {for(ll i=0;i<n;i++){cout<<array[i]<<" ";}cout<<endl;}
#define U() cout<<endl;
#define mp make_pair
typedef long long ll;
typedef pair<ll, ll> Pi;
typedef pair<ll, Pi> V;
typedef vector<ll> VE;
typedef vector<vector<ll>> VVE;
const ll mod = 1e9 + 7; //10^9+7

int main() {
    ll a[5];
    ll arg = -1;
    ll onesMin = 9;
    REP(i, 5) {
        cin >> a[i];
        ll onesPlace = a[i] % 10;
        if (onesPlace == 0 || onesMin <= onesPlace) continue;
        onesMin = onesPlace;
        arg = i;
    }
    ll ans = 0;
    REP(i, 5) {
        if (i == arg) continue;
        ans += ((ceil)((double)a[i] / (double)10) * 10);
    }
    ans += a[arg];
    print(ans);
}
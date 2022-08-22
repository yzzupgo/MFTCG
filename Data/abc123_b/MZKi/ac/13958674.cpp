#include <bits/stdc++.h>
template<class T> inline bool chmin(T&a, T b){if(a > b){a = b; return true;}else{return false;}}
template<class T> inline bool chmax(T&a, T b){if(a < b){a = b; return true;}else{return false;}}
#define ll long long
#define double long double
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=1;i<=(n);i++)
#define mod (ll)(1e9+7)
#define inf (ll)(3e18+7)
#define pi (double) acos(-1.0)
#define P pair<int,int>
#define PiP pair<int,pair<int,int>>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
using namespace std;

int main() {
    vector<int> m(5);
    int max_m = 0; 
    rep(i, 5){
        cin >> m[i];
        chmax(max_m, (10 - m[i] % 10) % 10);
        m[i] = (m[i] + 9) / 10 * 10;
    }
    cout << accumulate(all(m), 0) - max_m << endl;
}

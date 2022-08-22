#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const int NUM = 5;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a[NUM];
    rep(i, NUM) cin >> a[i];
    vector<int> v;
    rep(i, NUM) v.push_back(i);
    int ans = 1012345678;
    do {
        int t = 0;
        rep(i, NUM) {
            int vi = v[i];
            if(t % 10 > 0) t = t - (t % 10) + 10;
            t += a[vi];
        }
        chmin(ans, t);
    } while(next_permutation(v.begin(), v.end()));
    cout << ans << endl;
    return 0;
}
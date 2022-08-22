#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

using Graph = vector<vector<int>>;
Graph G;
// global variables
int t[10];

int main() {
    // input
    rep0(i, 5) cin >> t[i];
    // solve
    int x = 9;
    int sum = 0;
    rep0(i, 5) {
        if (t[i] % 10 == 0) {
            sum += t[i];
        } else {
            x = min(x, t[i] % 10);      
            sum += t[i] - t[i] % 10 + 10;
        }
    }
    if (x != 0) sum = sum - 10 + x;
    // output
    cout << sum << endl;
}
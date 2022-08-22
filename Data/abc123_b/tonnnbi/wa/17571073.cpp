#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    vector<int> f(5);
    rep(i,5) cin >> f[i];
    int rest = 0;
    int sum = 0;
    int min_rest = 10000000;
    rep(i,5) {
        sum += f[i];
        rest += 10 - f[i] % 10;
        if (min_rest > f[i] % 10) min_rest = f[i] % 10;
    }
    cout << sum + rest - min_rest << endl;
}

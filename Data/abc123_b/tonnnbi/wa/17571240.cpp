#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
    vector<int> f(5);
    rep(i,5) cin >> f[i];
    int rest = 0;
    int sum = 0;
    int max_rest = -1;
    rep(i,5) {
        sum += f[i];
        if (f[i] % 10 != 0) {
            rest += 10 - f[i] % 10;
            if (max_rest < 10 - f[i] % 10) max_rest = 10 - f[i] % 10;
        }
    }
    cout << sum + rest - max_rest << endl;
}

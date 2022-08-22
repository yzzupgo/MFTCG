#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

vector<int> menu(5);

int main() {
    rep(i, 5) cin >> menu.at(i);
    
    int r = 1e9;
    int ans = 0;
    rep(i, 5) {
        if(menu.at(i) % 10 != 0) r = min(r, menu.at(i) % 10);
        ans += ((menu.at(i) + 9)/10) * 10;
    }
    ans += r - 10;
    cout << ans << endl;
    return 0;
}
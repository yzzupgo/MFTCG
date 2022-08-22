#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using ll = long long;
const int INF = INT_MAX;
const ll LINF = LLONG_MAX;
bool chmin(int& a, int b){ if(a > b){ a = b; return 1; } return 0; }
bool chmax(int& a, int b){ if(a < b){ a = b; return 1; } return 0; }
int mod = 1000000007;
int mod2 = 998244353;

int main() {
    vector<int> A(5);
    int minv = 9;
    int af = 0;
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
        if (A[i] % 10 != 0 && A[i] % 10 < minv) {
            af = A[i];
            minv = A[i] % 10;
        }
    }
    int ans = 0;
    bool flag = true;
    for (int i = 0; i < 5; i++) {
        if (A[i] == af && flag) {
            flag = false;
            continue;
        }
        if (A[i] % 10 == 0) ans += A[i];
        else ans += (A[i] - (A[i] % 10) + 10);
    }
    ans += af;
    cout << ans << endl;

}
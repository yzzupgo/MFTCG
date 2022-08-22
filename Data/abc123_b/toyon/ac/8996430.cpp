#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;

int A[5];

int main() {
    rep(i, 5) {
        cin >> A[i];
    }

    int last_idx = -1;
    int last_value = -1;
    rep(i, 5) {
        int tmp = A[i] % 10;
        if (tmp != 0 && 10 - tmp > last_value) {
            last_idx = i;
            last_value = 10 - tmp;
        }
    }

    if (last_idx == -1) last_idx = 0;
    // cout << last_idx << endl;

    int ans = 0;
    rep(i, 5) {
        if (i == last_idx) {
            // printf("last %d %d\n", i, A[i]);
            ans += A[last_idx];
        } else {
            while (A[i] % 10 != 0) {
                A[i]++;
            }

            // printf("%d %d\n", i, A[i]);
            ans += A[i];
        }
    }

    cout << ans << endl;

}
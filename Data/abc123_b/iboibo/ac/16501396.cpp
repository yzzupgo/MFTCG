#include <bits/stdc++.h>
using namespace std;

int main() {
    int t[5];
    for (int i = 0; i < 5; i++)
        cin >> t[i];

    vector<vector<int>> perm(0, vector<int>(5));
    for (int a = 0; a < 5; a++) {
        for (int b = 0; b < 5; b++) {
            if (b != a) {
                for (int c = 0; c < 5; c++) {
                    if (c != a && c!= b) {
                        for (int d = 0; d < 5; d++) {
                            if (d != a && d != b && d != c) {
                                for (int e = 0; e < 5; e++) {
                                    if (e != a && e != b && e != c && e != d) {
                                        perm.push_back({a,b,c,d,e});
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    int ans = 10000000;
    for (int i = 0; i < perm.size(); i++) {
        int time = 0;
        for (int j = 0; j < 5; j++) {
            if (t[perm[i][j]]%10 == 0 || j == 4)
                time += t[perm[i][j]];
            else {
                time += t[perm[i][j]] + 10 - t[perm[i][j]]%10;
            }
        }
        ans = min(ans, time);
    }
    cout << ans << endl;
}    
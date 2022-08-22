#include <bits/stdc++.h>
using namespace std;

int main() {
    int t[5];
    for (int i = 0; i < 5; i++)
        cin >> t[i];

    sort(t, t+5);
    int ans = INT_MAX;
    do {
        int time = 0;
        for (int i = 0; i < 5; i++){
            if (t[i]%10 == 0 || i == 4)
                time += t[i];
            else
                time += t[i] + 10-t[i]%10;
        }
        ans = min(ans, time);
    }
    while (next_permutation(t, t+5));

    cout << ans << endl;
}
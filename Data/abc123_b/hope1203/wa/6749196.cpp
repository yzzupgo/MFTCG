#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; i++)
using namespace std;
typedef long long ll;

int main() {
    int orders[5];
    rep(i, 5) cin >> orders[i];

    int last = 0;
    int min = 10;
    for(int i=0; i<5; i++) {
        int temp;
        if(!(orders[i]%10)) continue;
        temp = orders[i] - int(orders[i]/10)*10;
        if(temp < min) {
            last = i;
            min = temp;
        }
    }

    int sum = 0;
    rep(i, 5) {
        if(i == last) continue;
        int temp;
        if(orders[i]%10) {
            temp = int(orders[i]/10 + 1) * 10;
        } else {
            temp = orders[i];
        }
        sum += temp;
        cout << sum << endl;
    }
    sum += orders[last];

    cout << sum << endl;
    return 0;

}
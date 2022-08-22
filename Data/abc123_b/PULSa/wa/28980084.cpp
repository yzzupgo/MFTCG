#include<iostream>
using namespace std;
int main() {
    int dish[5];
    int i;
    int maxamari = 0;
    for (i = 0; i < 5; i++) {
        cin >> dish[i];
        maxamari = max(maxamari, dish[i] % 10);
    }
    int ans = 0;
    for (i = 0; i < 5; i++) {
        ans += 10 * (int)((dish[i] + 9) / 10);
    }
    ans -= maxamari;
    cout << ans;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int s[5],ans=0,mi=124;
    cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4] ;
    for (int i = 0; i < 5; i++) {
        if (s[i] % 10 == 0) ans += s[i];
        else {
            ans += (s[i] / 10 + 1) * 10;
            mi = min(mi, s[i] % 10);
        }
    }
    ans += mi - 10;
    cout << ans << "\n";
    return 0;
}

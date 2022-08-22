#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int preans;
    preans = min({(a-1)%10, (b-1)%10, (c-1)%10, (d-1)%10, (e-1)%10});
    preans += 1;

    int ans = 0;
    ans += 4 + a/10 + b/10 + c/10 + d/10 + e/10;
    ans *= 10;
    ans += preans;
    cout << ans;
    return 0;
}
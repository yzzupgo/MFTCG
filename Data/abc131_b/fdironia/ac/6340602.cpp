#include <iostream>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int ans = (l + l + n - 1) * n / 2;
if (l > 0) {
ans -= l;
} else if (l + n - 1 < 0) {
ans -= l + n - 1;
}
cout << ans << endl;
return 0;
}

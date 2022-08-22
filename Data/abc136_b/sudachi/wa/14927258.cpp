#include <iostream>
#include <cmath>
using namespace std;
int main() {
int N;
cin >> N;
int l = to_string(N).length();
int d = pow(10, l-1);
int r = N%d;
int ans = 0;
for (int i=0; i<l-1; ++i) {
if (i%2 == 0) ans += 9*pow(10, i);
}
if (l%2 == 1) {
ans += r;
if (l > 1) {
ans += l/2;
}
}
cout << ans << endl;
return 0;
}

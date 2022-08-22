#include <iostream>
#include <cmath>
using namespace std;
int main() {
int N;
cin >> N;
int l = to_string(N).length();
int d = pow(10, l-1);
int q = N/d;
int r = N%d;
int ans = 0;
for (int i=0; i<l-1; ++i) {
if (i%2 == 0) {
ans += 9*pow(10, i);
}
}
if (l == 1) {
ans = N;
} else if (l%2 == 1) {
ans += r;
ans += pow(10, l-1)*(q-1);
if (l >= 3) ans += 1;
}
cout << ans << endl;
return 0;
}

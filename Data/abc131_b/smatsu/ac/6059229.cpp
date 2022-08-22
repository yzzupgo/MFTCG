#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
long long ans = 0;
if (L <= -N) {
for (int i = 0; i < N - 1; i++) {
ans += L + i;
}
}
else if (L < 0) {
for (int i = 0; i < N; i++) {
ans += L + i;
}
}
else {
for (int i = 1; i < N; i++) {
ans += L + i;
}
}
cout << ans << endl;
return 0;
}

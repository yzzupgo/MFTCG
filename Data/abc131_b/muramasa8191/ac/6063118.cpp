#include <iostream>
#include <vector>
using namespace std;
int main() {
long N, L;
cin >> N >> L;
long res = 0;
if (0 <= L) {
for (long n = L + 1, i = 0; i < N - 1; ++i, ++n) res += n;
} else if (L < 0 && L + N > 0) {
for (long n = L, i = 0; i < N; ++i, ++n) res += n;
} else {
for (long n = L, i = 0; i < N -1; ++i, ++n) res += n;
}
cout << res << endl;
return 0;
}

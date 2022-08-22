#include <cassert>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>
using namespace std;
namespace {
long ans(const long N, const long L) {
assert(2 <= N && N <= 200);
assert(-100 <= L && L <= 100);
const auto orig = (L + L + N - 1) * N / 2;
if (L >= 0) return orig - L;
if (N <= -L) return orig - (L + N - 1);
return orig;
}
}
int main() {
long N, L;
cin >> N >> L;
cout << ans(N, L);
}

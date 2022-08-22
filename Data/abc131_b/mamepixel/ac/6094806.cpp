#include <cassert>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>
using namespace std;
int main() {
long N, L;
cin >> N >> L;
assert(2 <= N && N <= 200);
assert(-100 <= L && L <= 100);
const auto orig = (L + L + N - 1) * N / 2;
auto min = L + 1;
for (auto i = 0u; i < N; ++i) {
if (L + i < abs(min))
min = L + i;
}
cout << (orig - min);
}

#include <iostream>
void solve( int N, int L ) {
int total = N*(L - 1) + ( N * (N + 1) / 2 );
int diff = std::abs( total ), ans = total;
for (int i=1; i<=N; ++i) {
int taste = L + i - 1;
if (diff >= std::abs( taste )) {
diff = std::abs( taste );
ans = total - taste;
}
}
std::cout << ans << std::endl;
}
int main() {
int N, L;
std::cin >> N >> L;
solve( N, L );
return 0;
}

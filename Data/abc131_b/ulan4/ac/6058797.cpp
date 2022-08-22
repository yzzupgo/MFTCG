#include <bits/stdc++.h>
using namespace std;
int main(void) {
int N, L;
cin >> N >> L;
int ans;
if (L > 0) {
ans = (2 * L + N) * (N - 1) / 2;
} else if (L + N - 1 < 0) {
ans = (2 * L + N - 2) * (N - 1) / 2;
} else {
ans = (2 * L + N - 1) * N / 2;
}
printf("%d\n", ans);
return 0;
}

#include <iostream>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int sum = 0;
for (int i = 1; i <= N; ++i) {
sum += L + i - 1;
}
int diff = abs(L);
for (int i = 2; i <= N; ++i) {
diff = min(diff, abs(L + i - 1));
}
int ans = 0;
if (sum > 0) ans = sum - diff;
else ans = sum + diff;
cout << ans << endl;
return 0;
}

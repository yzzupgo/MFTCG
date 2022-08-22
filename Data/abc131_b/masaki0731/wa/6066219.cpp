#include <iostream>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int arr[200];
int ans = 0;
for (int i = 1; i <= N; i++) {
ans += L + i - 1;
}
if (L - 1 == 0 || L + N - 1 == 0) {
cout << ans << endl;
} else if (L - 1 < 0 && L + N - 1 > 0) {
cout << ans << endl;
} else if (L - 1 < 0) {
ans -= L + N - 1;
cout << ans << endl;
} else if (L - 1 > 0) {
ans -= L;
cout << ans << endl;
}
return 0;
}

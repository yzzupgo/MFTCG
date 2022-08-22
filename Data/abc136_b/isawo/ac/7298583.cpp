#include <iostream>
using namespace std;
int main() {
int i, n;
cin >> n;
int ans = 0;
for (i = 1; i <= n; i++) {
int count = 0, k = i;
while (k) {
count++;
k /= 10;
}
if (count % 2 == 1)
ans++;
}
cout << ans << endl;
return 0;
}

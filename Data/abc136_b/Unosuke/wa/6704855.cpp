#include <iostream>
using namespace std;
int main() {
long long n, m = 10, k, ans = 0;
int x;
cin >> n;
for (int i = 0; i < 3; i++) {
k = m / 10;
if (n >= m) {
ans += m - k;
cout << ans << endl;
}
else if(n >= k){
if (k == 1) {
ans = n / k;
break;
}
x = n / k;
ans += n % k;
ans++;
if (x > 1) {
ans += 100 * (x - 1);
}
break;
}
else {
break;
}
m = m * 100;
}
cout << ans << endl;
}

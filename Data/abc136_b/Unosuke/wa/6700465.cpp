#include <iostream>
using namespace std;
int main() {
long long n, m = 10, k;
int ans = 0;
cin >> n;
for (int i = 0; i < 5; i++) {
k = m / 10;
if (n >= m) {
ans += m - k;
}
else if(n >= k){
if (k == 1) {
ans = n / k;
break;
}
ans += n % k;
ans++;
break;
}
else {
break;
}
m = m * 100;
}
cout << ans << endl;
}

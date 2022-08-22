#include <bits/stdc++.h>
using namespace std;
int main() {
int n, ans;
cin >> n;
if (n < 10) {
ans = n;
cout << ans << endl;
}
else if (n < 100 && n >= 10) {
ans = 9;
cout << ans << endl;
}
else if (n < 1000 && n >= 100) {
ans = n-90;
cout << ans << endl;
}
else if (n < 10000 && n >= 1000) {
ans = 909;
cout << ans << endl;
}
else if (n < 100000 && n >= 10000) {
ans = n-9090;
cout << ans << endl;
}
else if (n == 100000) {
ans = 90909;
cout << ans << endl;
}
else {
}
}

#include <bits/stdc++.h>
using namespace std;
bool f(int x) {
int digits = 0;
while(x) {
digits++;
x /= 10;
}
return digits % 2 == 1;
}
int main(void) {
int n;
cin >> n;
int ans = 0;
for (int i = 1; i <= n; i++) {
if (f(i)) ans++;
}
cout << ans << endl;
return 0;
}

#include <bits/stdc++.h>
using namespace std;
int d_num(int n) {
int res = 0;
while (n > 0) {
res++;
n = n / 10;
}
return res;
}
int pow_m (int a, int b) {
int res = 1;
for (int i=0;i < b; i++) {
res *= a;
}
return res;
}
int main() {
int n;
cin >> n;
int ans = 0;
for (int i= 1;i < d_num(n); i++) {
if (i % 2 == 1) {
ans += 9 * pow_m(10 , i - 1);
}
}
if (d_num(n) % 2 == 1) {
ans += n - pow_m(10 , d_num(n) -1) + 1;
}
cout << ans << endl;
}

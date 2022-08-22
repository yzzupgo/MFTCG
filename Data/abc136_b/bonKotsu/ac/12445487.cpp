#include <bits/stdc++.h>
using namespace std;
int check_digits(int n) {
int res = 0;
while(n > 0) {
res++;
n /= 10;
}
return res;
}
int main() {
int N;
cin >> N;
int ans = 0;
for (int i = 0; i <= N; i++) {
if (check_digits(i) % 2) ans++;
}
cout << ans << endl;
}

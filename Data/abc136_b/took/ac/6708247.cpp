#include <bits/stdc++.h>
#define ll long long
using namespace std;
int pow_(int i) {
int ret = 1;
for (; i > 0; i--) {
ret *= 10;
}
return ret;
}
int main() {
int N, N_;
cin >> N;
N_ = N;
int ans = 0;
int i;
for (i = 0; N > 0; N /= 10) {
i++;
}
if (i > 1) ans += 9;
if (i > 3) ans += 999 - 100 + 1;
if (i > 5) ans += 99999 - 10000 + 1;
if (i == 1)
ans += N_;
else if (i % 2 == 1)
ans += N_ - pow_(i - 1) + 1;
cout << ans;
}

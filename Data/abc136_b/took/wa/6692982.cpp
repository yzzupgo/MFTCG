#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
if (i % 2 == 1) ans += N_ % ((int)pow(10, i - 1));
cout << ans;
}

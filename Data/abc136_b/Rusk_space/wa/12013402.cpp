#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int N;
cin >> N;
int digit = log10(N)+1;
int ans = 0;
if (digit == 1) {
ans = digit;
}
if (digit == 2) {
ans = 9;
}
if (digit == 3) {
ans = 9 + (N-99);
}
if (digit == 4) {
ans = 909;
}
if (digit == 5) {
ans = 909 + (N-9999);
}
if (digit == 6) {
ans = 90909;
}
cout << ans << endl;
}

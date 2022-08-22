#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
if (N < 10) {
ans = N;
cout << ans << endl;
}
if (9 < N && N < 100) {
ans = 9;
cout << ans << endl;
}
if (99 < N && N < 1000) {
ans = 9 + (N - 99);
cout << ans << endl;
}
if (999 < N && N < 10000) {
ans = 9 + 900;
cout << ans << endl;
}
if (9999 < N && N <= 100000) {
ans = 9 + 900 + (N - 10000);
cout << ans << endl;
}
}

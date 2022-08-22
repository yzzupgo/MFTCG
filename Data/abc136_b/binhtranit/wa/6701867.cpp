#include <bits/stdc++.h>
using namespace std;
int main() {
int n; cin >> n;
int res;
if (n < 10) {
res = n;
}
else {
if (n < 100) res = 9;
else {
if (n < 1000) res = 9 + n - 99;
else {
if (n < 10000) res = 9 + 999 - 99;
else {
if (n < 100000) res = 9 + 900 + n - 9999;
else res = 9 + 900 + 900000;
}
}
}
}
cout << res;
}

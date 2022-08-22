#include "bits/stdc++.h"
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int ans = a + b;
if (a + b < a - b) {
ans = a - b;
}
if (a - b < a * b) {
ans = a * b;
}
cout << ans << endl;
}

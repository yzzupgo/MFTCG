#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
typedef long long ll;
int main() {
int n, l; cin >> n >> l;
vector<int> a(n);
vector<int> b(n);
for (int i = 0; i < n; ++i) {
a[i] = l + i - 1;
}
int ans=1000000;
for (int i = 0; i < n; ++i) {
ans = min(ans, abs(a[i]));
}
for (int i = 0; i < n; ++i) {
if (a[i] == ans) {
a[i] == 0;
break;
}
}
int sum = 0;
for (int i = 0; i < n; ++i) {
sum += a[i];
}
cout << sum << endl;
}

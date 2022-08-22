#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l, m; cin >> n >> l;
int v[n];
for (int i = 0; i < n; i++) v[i] = i + l;
sort(v, v + n);
for (int i = 0; i < n; i++) {
if (v[i] < 0) continue;
m = v[i]; break;
}
int a = 0;
for (int i = 0; i < n; i++) {
if (v[i] == m) continue;
a += v[i];
}
cout << a << endl;
}

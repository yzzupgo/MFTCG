#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l; cin >> n >> l;
int v[n];
for (int i = 0; i < n; i++) v[i] = abs(i + l);
sort(v, v + n);
int a = 0;
for (int i = 1; i < n; i++) a += v[i];
cout << a << endl;
}

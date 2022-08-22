#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
vector<int> a(n);
for(int i = 0; i < n; i++) {
a[i] = l + i;
}
int s = 0;
for(int i = 0; i < n; i++) {
s += a[i];
}
int min = 1e9;
int ans;
for(int i = 0; i < n; i++) {
if(abs(a[i]) < min) {
min = abs(a[i]);
ans = s - a[i];
}
}
cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l, s = 0, ans;
cin >> n >> l;
int a[n + 1];
for(int i = 1; i <= n; i++) {
s += l + i - 1;
}
if(l >= 0) ans = l;
else {
if(n <= abs(l)) ans = n + l - 1;
else ans = 0;
}
cout << s - ans;
}

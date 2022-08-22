#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
int l;
cin >> n >> l;
int sum = 0;
int cnt = -1000000;
int ans;
for (int i = 0; i < n; i++) {
sum += i;
}
sum += n * l;
for (int i = 0; i < n; i++) {
if (sum - i - l == 0) {
ans = 0;
break;
}
if (cnt < abs(sum - i - l)) {
cnt = abs(sum - i - l);
ans = sum - i - l;
}
}
cout << ans << endl;
}

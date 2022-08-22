#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
int l;
cin >> n >> l;
int sum = 0;
int cnt = 10000000;
int ans;
for (int i = 0; i < n; i++) {
sum += i;
}
sum += n * l;
for (int i = 0; i < n; i++) {
if (cnt > abs(i + l)) {
cnt = abs(i + l);
ans = sum - i - l;
}
}
cout << ans << endl;
}

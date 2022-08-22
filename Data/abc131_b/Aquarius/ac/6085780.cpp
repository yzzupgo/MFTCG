#include <bits/stdc++.h>
using namespace std;
int n, l;
int main() {
cin >> n >> l;
int mn = 1e9;
int sum = 0;
for (int i = 0; i < n; ++i) {
if (abs(l + i) < abs(mn)) {
mn = l + i;
}
sum += l + i;
}
cout << sum - mn << endl;
}

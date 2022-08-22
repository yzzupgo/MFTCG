#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i);
using ll = long long;
int main() {
int n, l; cin >> n >> l;
vector<int> aji(n);
for (int i = 0; i < n; i++) {
aji.at(i) = l + i;
}
int sum = 0;
for (int i = 0; i< n; i++) {
sum += aji.at(i);
}
int m = 1e9;
int tmp;
for (int i = 0; i < n; i++) {
if (m > abs(aji.at(i))) {
m = abs(aji.at(i));
tmp = aji.at(i);
}
}
cout << sum - tmp << endl;
return 0;
}

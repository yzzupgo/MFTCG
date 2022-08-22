#include <bits/stdc++.h>
using namespace std;
int main() {
int n, m;
cin >> n >> m;
vector<int> a(n);
for(int i = 0; n < i; i++) {
cin >> a[i];
}
for(int i = 0; i < n - 1; i++) {
if(a[i] == a[i + 1]) {
cout << i + 1 << '\n';
return 0;
}
}
cout << 0 << '\n';
}

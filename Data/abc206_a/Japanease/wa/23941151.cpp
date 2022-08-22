#include <bits/stdc++.h>
using namespace std;
int main() {
int64_t n;
cin >> n;
vector<int> a(n);
for(int i = 0; i < n; i++) {
cin >> a[i];
}
int sum = 0;
for(int i = 0; i < n; i++) {
for(int k = i + 1; k < n; k++) {
if(a[i] != a[k]) {
sum++;
}
}
}
cout << sum;
}

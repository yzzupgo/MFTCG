#include<iostream>
using namespace std;
int abs(int ll) {
return (ll>= 0) ? ll : -ll;
}
int main() {
int n, l;
cin >> n >> l;
int sum = 0;
int min = l + n;
int ll;
for (int i = 0; i < n; i++) {
int m = abs(l + i);
sum += l + i;
if (m < min) {
min = m;
ll = l + i;
}
}
cout << sum - ll << endl;
}

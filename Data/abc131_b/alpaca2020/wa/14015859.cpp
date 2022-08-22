#include <bits/stdc++.h>
#define rep(s,t) for (int s = 0; s < t; s++);
using namespace std;
using ll = long long;
int main() {
int n, l, k;
cin >> n >> l;
vector<int> v(n);
for (int i = 0; i < n; i++){
v[i] = l + i - 1;
}
int sum = 0;
for (int i = 0; i < n; i++){
sum += v[i];
}
if (v[0] > 0){
sum -= v[0];
}
cout << sum << endl;
}

#include <bits/stdc++.h>
using namespace std;
int n, l;
int main() {
cin >> n >> l;
vector<int> taste(n);
int sum = 0;
for (int i = 0; i < n; i++) {
taste[i] = l+i;
sum += taste[i];
}
vector<int> abstaste(n);
for (int i = 0; i < n; i++) abstaste[i] = abs(taste[i]);
auto iter = min_element(abstaste.begin(), abstaste.end());
int ans = sum - taste[iter-abstaste.begin()];
cout << ans << endl;
return 0;
}

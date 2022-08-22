#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
int main() {
int n, l, sum = 0;
cin >> n >> l;
vector<int> p(n);
for (int i = 0; i < n; i++) {
p[i] = l + i;
sum += p[i];
}
int ans = 1e9;
for (int i = 0; i < n; i++) {
ans = min(ans, sum - p[i]);
}
cout << ans << endl;
}

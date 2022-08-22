#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
int main() {
int n, l; cin >> n >> l;
vector<int> a(n);
rep(i, n) a[i] = l + i;
int sum = 0;
rep(i, n) sum += a[i];
int ans = 1e9;
rep(i, n) {
int t = sum - a[i];
if (abs(t - sum) < abs(ans - sum)) ans = t;
}
cout << ans << endl;
return 0;
}

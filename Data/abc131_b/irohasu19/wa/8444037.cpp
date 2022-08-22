#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define chmin(x,y) x = min(x, y)
#define chmax(x,y) x = max(x, y)
using namespace std;
typedef long long ll;
ll INF = 1001001001;
int main() {
int N, L; cin >> N >> L;
vector<int> a(N);
int sum = 0;
rep(i, N) {
a[i]=i+L; sum += a[i];
}
int mini = INF;
rep(i, N) {
chmin(mini, abs(a[i]));
}
int ans = sum - mini;
cout << ans << endl;
}

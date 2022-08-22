#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ALL(c) (c).begin(), (c).end()
using namespace std;
using ll = long long int;
using pii = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
const long long INF = 1LL << 60;
const int inf = 1001001001;
const ll mod = 1000000007;
int keta(int n) {
int cnt = 0;
while(n > 0) {
n /= 10;
cnt++;
}
return cnt;
}
int main()
{
int n; cin >> n;
int ans = 0;
for (int i = 1; i <= n; i++) {
if (keta(i) % 2 == 1) ans++;
}
cout << ans << endl;
}

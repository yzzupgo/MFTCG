#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
static const int INF (1<<30);
int main() {
int N; cin >> N;
if (N <= 9) {
cout << N << endl;
return 0;
}
int ans = 0;
int cnt = 0;
int x = N;
while (N > 0) {
N /= 10;
if (cnt % 2 == 0) {
if (N > 0) {
ans += 9 * pow(10, cnt);
} else {
int mod = x % (int)pow(10, cnt+1) - pow(10, cnt);
ans += mod + 1;
}
}
cnt++;
}
cout << ans << endl;
return 0;
}

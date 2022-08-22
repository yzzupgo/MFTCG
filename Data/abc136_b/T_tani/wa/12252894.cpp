#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF (INT_MAX / 4)
#define REP(i,n) for (ll i = 0, i ##_len = (n); i < i ##_len; ++i)
#define ALL(a) (a).begin(), (a).end()
#define TIMER_S(start) chrono::system_clock::time_point start = chrono::system_clock::now();
#define TIMER_E(end) chrono::system_clock::time_point end = chrono::system_clock::now();
#define TIME(start,end) cout << static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count()) << "ms" << "\n";
int main() {
int n, ans;
cin >> n;
for (int i = 1; i <= n;i++){
if (((int)log10(n) + 1) % 2 == 1) ans++;
}
cout << ans << "\n";
return 0;
}

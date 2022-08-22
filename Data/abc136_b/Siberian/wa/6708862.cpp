#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define all(a) a.begin(), a.end()
template <typename T1, typename T2> inline void chkmax(T1 & x, const T2 & y) {if (y > x) x = y;}
template <typename T1, typename T2> inline void chkmin(T1 & x, const T2 & y) {if (y < x) x = y;}
int check(int a) {
int ans = 0;
while (a) {
ans++;
a /= 2;
}
return ans % 2;
}
void read() {
int n;
cin >> n;
int ans = 0;
for (int i = 1; i < n; i++) {
ans += check(i);
}
cout << ans << endl;
}
void run() {
}
void write() {
}
signed main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
read();
run();
write();
return 0;
}

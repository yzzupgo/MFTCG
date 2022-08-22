#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
const long long INF = 1LL << 60;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define repr(i,n) for (int i = n; i >= 0; i--)
#define FOR(i,m,n) for (int i = m; i < n; i++)
const long long mod = 1e9 + 7;
int main() {
int n, L;
cin >> n >> L;
int appleSum = 0;
if (L >= 0) {
for (int i = 2; i <= n; i++) {
appleSum += L + i - 1;
}
} else if (L < 0) {
if (n + L >= 0) {
for (int i = 1; i <= n; i++) {
appleSum += L + i - 1;
}
} else {
for (int i = 1; i < n; i++) {
appleSum += L + i - 1;
}
}
}
cout << appleSum << endl;
return 0;
}

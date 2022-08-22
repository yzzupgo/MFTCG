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
int n, l;
cin >> n >> l;
int sum = 0, abs_min = 100000000;
rep(i, n) {
sum += l + i;
abs_min = min(abs_min, abs(l + i));
}
if (sum < 0)
cout << sum + abs_min << endl;
else
cout << sum - abs_min << endl;
return 0;
}

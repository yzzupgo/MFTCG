#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
int main() {
int N, L;
cin >> N >> L;
int ans = 0;
if (L > 0) {
for (int i = L + 1; i <= L + N - 1; i++) ans += i;
} else if (L + N - 1 < 0) {
for (int i = L; i <= L + N - 2; i++) ans += i;
} else {
for (int i = L; i <= L + N - 1; i++) ans += i;
}
cout << ans << endl;
}

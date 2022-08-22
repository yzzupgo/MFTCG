#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
int main() {
int n, l;
cin >> n >> l;
int m = INF, sum = 0;
for (int i = 0; i < n; i++) {
int p = l + i;
if (l < 0) p -= 1;
m = min(p, m);
sum += p;
}
cout << sum - m << endl;
}

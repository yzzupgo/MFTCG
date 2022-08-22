#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
int main() {
int a, b;
cin >> a >> b;
if (a <= 5) {
cout << 0 << endl;
} else if (a <= 12) {
cout << a / 2 << endl;
} else {
cout << a << endl;
}
}

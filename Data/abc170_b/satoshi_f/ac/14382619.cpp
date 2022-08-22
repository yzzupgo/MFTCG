#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int INF = 1 << 30;
const ll LINF = 1LL << 50;
const int NIL = -1;
const int MAX = 10000;
const int mod = 1000000007;
const double pi = 3.141592653589;
int main(){
int x, y;
cin >> x >> y;
for (int c = 0; c <= x; c++) {
int t = x - c;
int tot = 2 * c + 4 * t;
if (y == tot) {
cout << "Yes" << '\n';
return 0;
}
}
cout << "No" << '\n';
}

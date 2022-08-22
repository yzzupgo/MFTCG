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
int a = 4 * x - y;
if (a % 2 != 0 || a < 0) {
cout << "No" << '\n';
}
else {
a /= 2;
int b = x - a;
if (b < 0) cout << "No" << '\n';
else cout << "Yes" << '\n';
}
}

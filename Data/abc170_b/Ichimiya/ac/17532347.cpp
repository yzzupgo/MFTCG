#include <bits/stdc++.h>
#define NIL (-1)
#define LL long long
using namespace std;
const int64_t MOD = 1e9 + 7;
const int INF = INT_MAX;
const double PI = acos(-1.0);
int main() {
int X, Y;
cin >> X >> Y;
bool b = 0;
for (int i = 0; i <= X; i++) {
int n = 2 * i + 4 * (X - i);
if (n == Y) b = 1;
}
cout << (b ? "Yes" : "No") << endl;
}

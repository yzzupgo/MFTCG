#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
int main() {
int x, y;
cin >> x >> y;
bool ans = false;
if (x == 1 && y == 2 || y == 4) ans = true;
else {
REP(i,x) {
if ((i+1) * 2 + (x - i - 1) * 4 == y) ans = true;
}
}
cout << (ans ? "Yes" : "No") << endl;
}

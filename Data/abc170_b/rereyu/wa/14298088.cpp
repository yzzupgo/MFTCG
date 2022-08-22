#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define REP(i,n) for (int i = 0; i < n; i++)
#define FOR(i,m,n) for (int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using ll = long long;
using ull = unsigned long long;
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if (X*4 < Y) {
cout << "No" << endl;
} else if (Y % 2 == 0) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}

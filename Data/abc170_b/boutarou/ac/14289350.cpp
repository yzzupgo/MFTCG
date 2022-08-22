#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define fcout cout << fixed << setprecision(15)
using lint = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
const double PI = 3.1415926535897932;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int x, y;
cin >> x >> y;
rep(i, 100) {
rep(j, 100) {
if (i + j == x && i * 2 + j * 4 == y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}

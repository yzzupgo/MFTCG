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
int X, Y;
cin >> X >> Y;
int A = (Y - 2 * X) % 2;
int B = (Y - 2 * X) / 2;
if (A == 0 && B <= X) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}

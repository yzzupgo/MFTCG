#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
template <class T>
inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template <class T>
inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
int main() {
int x, y;
cin >> x >> y;
if (4 * x == y) {
cout << "Yes" << endl;
return 0;
} else if (4 * x > y) {
int diff = (4 * x - y) / 2;
x -= diff;
if (x < 0 || diff < 0) {
} else if (4 * x + 2 * diff == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}

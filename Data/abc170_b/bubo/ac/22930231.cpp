#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
#define rep(i,n) for (int i=0; i< (n); ++i)
typedef pair<int, int> P;
int main() {
int X, Y;
cin >> X >> Y;
bool flag = false;
rep(i, X+1) {
if (2*i + 4*(X-i) == Y) {
flag = true;
}
}
if (flag) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}

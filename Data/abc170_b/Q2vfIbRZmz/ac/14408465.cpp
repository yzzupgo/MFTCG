#define _GIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int X, Y;
cin >> X >> Y;
for (int c = 0; c <= X; ++c) {
int t = X - c;
int asi = c * 2 + t * 4;
if (asi == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}

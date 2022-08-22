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
if (Y <= 1) {
cout << "No" << endl;
return 0;
}
if (Y % 2 != 0) {
cout << "No" << endl;
return 0;
}
if ((double)Y / 4 > X) {
cout << "No" << endl;
return 0;
}
if (Y / 2 < X) {
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}

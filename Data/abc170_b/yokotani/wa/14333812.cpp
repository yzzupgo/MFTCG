#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;
int main() {
int x, y;
cin >> x >> y;
float b = 2 * x - y / 2;
float t = -x + y / 2;
if (b < 0) {
cout << "No" << endl;
return 0;
}
if (t < 0) {
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}

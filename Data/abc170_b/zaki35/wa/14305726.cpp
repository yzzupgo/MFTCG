#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if (y % 2 == 1) {
cout << "No" << endl;
return 0;
}
rep (i, 100) {
if (2 * i + 4 * (x - i) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}

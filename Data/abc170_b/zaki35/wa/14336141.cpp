#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define ll long long
using namespace std;
int main() {
int x, y;
cin >> x >> y;
rep (i, 101) {
if (2 * i + 4 * (x - i) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}

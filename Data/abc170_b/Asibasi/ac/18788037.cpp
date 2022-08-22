#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define fs first
#define sc second
#define pb push_back
#define mkp make_pair
#define endl '\n'
int main() {
cin.sync_with_stdio(false), cin.tie(nullptr);
int x, y;
cin >> x >> y;
if (y >= 2 * x && y % 2 == 0 && y <= 4 * x) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}

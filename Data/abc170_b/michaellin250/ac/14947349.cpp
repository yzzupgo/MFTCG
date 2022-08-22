#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_set>
#define ll long long
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll x, y;
cin >> x >> y;
if (y % 2 == 0 && y >= 2 * x && y <= 4 * x) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}

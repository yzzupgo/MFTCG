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
ll w = (y - 2 * x) / 2;
ll g = x - w;
if (2 * g + 4 * w == y) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}

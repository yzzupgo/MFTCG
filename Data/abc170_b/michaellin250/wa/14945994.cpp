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
ll c = (4 * x - y) / 2;
ll t = x - c;
if (2 * c + 4 * t == y) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}

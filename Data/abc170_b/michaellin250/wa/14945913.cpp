#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_set>
#define ll long long
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x, y;
cin >> x >> y;
double w = (y - 2 * x) / 2.0;
double g = x - w;
if (w < 0) {
cout << "No" << endl;
} else if (2 * g + 4 * w == y) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void pv(vector<int>& v) {
cout << "{ ";
for (auto el: v) {
cout << el << ", ";
}
cout << " }" << endl;
}
int main() {
ios::sync_with_stdio(0); cin.tie(0);
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
int c = i;
int t = x - i;
if (2 * c + 4 * t == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}

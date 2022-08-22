#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
string solve() {
int x, y; cin >> x >> y;
if (y & 1) return "No";
int b = y/2 - x;
int a = x - b;
if (a < 0 || b < 0) return "No";
return (a + b == x) ? "Yes" : "No";
}
int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
cout << solve() << endl;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
string solve() {
int x, y; cin >> x >> y;
if (y & 1) return "NO";
int b = y/2 - x;
int a = x - b;
if (a < 0 || b < 0) return "NO";
return (a + b == x) ? "YES" : "NO";
}
int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
cout << solve() << endl;
}

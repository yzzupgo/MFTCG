#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <int, int> P;
template <typename T> T gcd(T x, T y) { return( y ? gcd(y, x % y) : x); }
template <typename T> T lcm(T x, T y) { return( x / gcd(x, y) * y); }
template <typename T> void printVec(vector<T> &vec) {
cout << "";
for (auto it = vec.begin(); it != vec.end(); ++it) {
cout << *it << " ";
}
cout << endl;
}
int main() {
int x, y;
cin >> x >> y;
for (int i = 1; i <= x; i++) {
int count;
count = i * 2 + (x - i) * 4;
if (count == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}

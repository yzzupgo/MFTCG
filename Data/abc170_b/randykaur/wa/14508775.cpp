#include<bits/stdc++.h>
using namespace std;
int main() {
ios_base :: sync_with_stdio(0); cin.tie(NULL);
int x, y;
cin >> x >> y;
int t = (y - 2 * x) / 2;
int c = x - t;
if (t < 0 || c < 0)
cout << "NO" << '\n';
else if (t + c != x || 2 * c + 4 * t != y) {
cout << "NO" << '\n';
}
else cout << "YES" << '\n';
return 0;
}

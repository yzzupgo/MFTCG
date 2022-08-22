#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
int ans = x * 4;
if (ans > y) cout << "Yes" << "\n";
else cout << "No" << "\n";
return 0;
}

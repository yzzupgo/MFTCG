#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
if (x * 2 <= y && x * 4 >= y && y % 2 == 0) cout << "Yes" << "\n";
else cout << "No" << "\n";
return 0;
}

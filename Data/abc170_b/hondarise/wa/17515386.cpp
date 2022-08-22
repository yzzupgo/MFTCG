#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pint = pair<int, int>;
int main() {
int X, Y;
cin >> X >> Y;
string ans = "No";
for (int i = 1; i <= X; ++i) {
if (i * 2 + (X - i) * 4 == Y) {
ans = "Yes";
break;
}
}
cout << ans << endl;
return 0;
}

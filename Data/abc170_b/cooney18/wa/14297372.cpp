#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int X, Y;
cin >> X >> Y;
string ans = "No";
for (int i=1; i<=X; i++) {
int a = i;
int b = X - i;
for (int j=1; j<=Y; j++) {
if (a * 2 + b * 4 == Y) ans = "Yes";
}
}
cout << ans << endl;
return 0;
}

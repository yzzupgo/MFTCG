#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int X, Y;
cin >> X >> Y;
string ans = "No";
for (int i=0; i<=X; i++) {
int a = i;
int b = X - i;
if (a * 2 + b * 4 == Y) ans = "Yes";
}
cout << ans << endl;
return 0;
}

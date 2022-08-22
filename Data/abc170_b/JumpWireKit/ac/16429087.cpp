#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
string ans = "No";
for(int i = 0; i < X + 1; i++) {
int j = X - i;
if(2 * i + 4 * j == Y) {
ans = "Yes";
break;
}
}
cout << ans << endl;
return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
string ans = "No";
for (int i = 0; i <= x; i++) {
if (i*2+(x-i)*4 == y) {
ans = "Yes";
}
}
cout << ans << endl;
}

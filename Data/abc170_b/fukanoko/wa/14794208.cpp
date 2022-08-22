#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
string ans = "No";
for(int i = 0;i < x;++i) {
int b;
b = x - i;
if((2*i)+(4*b) == y) {
ans = "Yes";
}
}
cout << ans << endl;
}

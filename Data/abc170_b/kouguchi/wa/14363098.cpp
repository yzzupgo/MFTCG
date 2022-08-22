#include<iostream>
#include<string>
using namespace std;
int main() {
int a, b, x, y, z, i;
string ans = "no";
cin >> a >> b;
for (i = 0; i <= a+1; i++) {
x = i;
y = a - x;
z = 4 * x + 2 * y;
if (b == z) {
ans = "yes";
}
}
cout << ans << endl;
return 0;
}

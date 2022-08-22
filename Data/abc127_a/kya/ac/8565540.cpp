#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int ans = 0;
if (12 < a) {
ans = b;
} else if (5 < a) {
ans = b/2;
}
cout << ans << endl;
return 0;
}

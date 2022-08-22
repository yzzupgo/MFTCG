#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
int ans;
if(13 < a) {
ans = b;
} else if (6 <= a && a <= 12) {
ans = b / 2;
} else {
ans = 0;
}
cout << ans << endl;
return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int ans = 0;
int min = l;
for (int i = 0; i < n; i++) {
if (abs(min) > abs(l + i))
min = l + i;
ans += l + i;
}
cout << ans - min << endl;
return 0;
}

#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int cnt = 0;
for (int i = 1; i <= n; i++) {
if (10 <= i && i < 100) continue;
else if (1000 <= i && i < 10000) continue;
else if (i == 100000) continue;
cnt++;
}
cout << cnt << endl;
return 0;
}

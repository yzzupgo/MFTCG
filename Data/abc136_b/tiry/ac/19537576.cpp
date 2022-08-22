#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int cnt = 0;
for (int i = 1; i <= n; i++) {
if (i < 10) cnt++;
else if (i > 99 && i < 1000) cnt++;
else if (i > 9999 && i < 100000) cnt++;
}
cout << cnt << endl;
}

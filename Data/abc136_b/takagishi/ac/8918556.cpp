#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int result = 0;
for (int i = 1; i <= n; i++) {
if (i < 10) result++;
if (99 < i && i < 1000) result++;
if (9999 < i && i < 100000) result++;
}
cout << result << endl;
return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
if (N < 100) ans = N % 10;
else if (N < 10000) ans = 9 + (N % 1000 - 99);
else ans = 9 + 900 + (N % 100000 - 9999);
cout << ans << endl;
}

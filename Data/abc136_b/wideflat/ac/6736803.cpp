#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
if (N < 10) ans = N;
else if (N < 100) ans = 9;
else if (N < 1000) ans = 9 + (N - 99);
else if (N < 10000) ans = 9 + 900;
else if (N < 100000) ans = 9 + 900 + (N - 9999);
else ans = 9 + 900 + 90000;
cout << ans << endl;
}

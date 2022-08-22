#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int N, t, c = 0; cin >> N; t = N;
while (t) {
c++; t /= 10;
}
if (c == 1 || c == 2) cout << 9 << "\n";
else if (c == 3) cout << 9 + (N - 99) << "\n";
else if (c == 4) cout << 909 << "\n";
else if (c == 5) cout << 909 + (N - 9999) << "\n";
else cout << 90909 << "\n";
return EXIT_SUCCESS;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
for (int i = 1; i <= N; ++i) {
if (int(log10(i)) % 2 == 0) {
++ans;
}
}
cout << ans << endl;
return 0;
}

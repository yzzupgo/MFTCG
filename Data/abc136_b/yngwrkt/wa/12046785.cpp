#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
for (int i = 0; i < N; i++) {
if (to_string(i).length() % 2 == 1) ans++;
}
cout << ans << endl;
}

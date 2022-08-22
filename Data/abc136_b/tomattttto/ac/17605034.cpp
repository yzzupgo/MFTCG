#include <iostream>
#include <string>
#define rep(I,L) for (int I = 0; I < L; ++I)
using namespace std;
int main() {
int n;
cin >> n;
int ans = 0;
for (int i = 1; i <= n; ++i) {
string s = to_string(i);
if (s.size() % 2 > 0) {
ans++;
}
}
cout << ans << endl;
return 0;
}

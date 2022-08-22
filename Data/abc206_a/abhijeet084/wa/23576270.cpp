#include <bits/stdc++.h>
using namespace std;
void solve() {
int n;
cin >> n;
int ans = (1.08 * n);
if(ans < 206) {
cout << "yay!\n";
} else if(ans == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t = 1;
while(t--) {
solve();
}
return 0;
}

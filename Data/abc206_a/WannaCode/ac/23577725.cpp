#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;
long long mod = 1e9 + 7;
void solve() {
int n;
cin >> n;
n = floor(n * 1.08);
if(n < 206) {
cout << "Yay!\n";
} else if(n > 206) {
cout << ":(\n";
} else {
cout << "so-so\n";
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}

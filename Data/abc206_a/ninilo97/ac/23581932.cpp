#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve() {
int n;
cin >> n;
n *= 1.08;
if(n == 206) {
cout << "so-so";
} else if(n < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
solve();
return 0;
}

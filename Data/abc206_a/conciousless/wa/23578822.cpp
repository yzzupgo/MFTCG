#include <bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
using namespace std;
void solve() {
ld n, lim = 206;
cin >> n;
n = n * 1.08;
n = (int)n;
if(n > lim) {
cout << ":(";
}
if(n < lim) {
cout << "Yay!";
} else {
cout << "so-so";
}
cout << '\n';
}
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}

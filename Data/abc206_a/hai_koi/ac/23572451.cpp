#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rapido ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
void solve() {
int n;
cin >> n;
double res = 1.08 * n;
int ans = (int)res;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int32_t main() {
rapido;
int t = 1;
while(t--) {
solve();
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve() {
ll n;
cin >> n;
double k = 1.08 * n;
if(floor(k) < 206) {
cout << "Yay!";
} else if(floor(k) > 206) {
cout << ":(";
} else if(floor(k) == 206) {
cout << "so-so";
}
return 0;
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}

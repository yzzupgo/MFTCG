#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve() {
ll n;
cin >> n;
double k = 1.08 * n;
if(k < 206) {
cout << "Yay!";
} else if(k > 206) {
cout << ":(";
} else {
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

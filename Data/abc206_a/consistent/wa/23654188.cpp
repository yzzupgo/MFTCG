#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, string> pi;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() {
IOS;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
double ans = 1.08 * n;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}

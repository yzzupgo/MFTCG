#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
void solve() {
int n ;
cin >> n;
int a = n * 1.08;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a > 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int32_t main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t = 1;
for(int i = 0; i < t; i++) {
solve();
}
}

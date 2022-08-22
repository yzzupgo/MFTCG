#include <bits/stdc++.h>
using namespace std;
void solve() {
int n;
cin >> n;
double ans = 1.08 * n;
if((int)ans < 206) {
cout << "Yay!" << endl;
} else if((int)ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
ios::sync_with_stdio(false);
solve();
return 0;
}

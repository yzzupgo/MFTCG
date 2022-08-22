#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void YesNo(bool f) {
cout << (f ? "Yes" : "No");
}
signed main() {
cin.tie(0);
cout.tie(0);
ios_base::sync_with_stdio(false);
int n;
cin >> n;
double ans = ceil(1.08 * (double)n);
if(ans <= 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}

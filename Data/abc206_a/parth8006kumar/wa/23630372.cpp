#include <bits/stdc++.h>
using namespace std;
void solve() {
double n;
cin >> n;
double a = 1.08;
double ans = (double)n * (double)a;
if((int)ans < 206) {
cout << "Yay" << "\n";
} else if((int)ans == 206) {
cout << "so-so" << "\n";
} else {
cout << ":(" << "\n";
}
}
int main() {
solve();
return 0;
}

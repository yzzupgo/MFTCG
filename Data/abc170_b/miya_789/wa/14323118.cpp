#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int X, Y;
cin >> X >> Y;
int ans_hint = (Y - 2*X) % 2;
if (ans_hint == 0 && ans_hint > 0) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}

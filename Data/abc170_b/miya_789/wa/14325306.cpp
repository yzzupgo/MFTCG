#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int X, Y;
cin >> X >> Y;
int ans_hint = (Y - 2*X);
if (ans_hint % 2 == 0 && ans_hint >= 1 && ans_hint <= 100 && ans_hint < X) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}

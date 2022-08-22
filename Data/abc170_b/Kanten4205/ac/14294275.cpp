#include "bits/stdc++.h"
using namespace std;
int main() {
long long X, Y; cin >> X >> Y;
if (Y % 2 != 0) cout << "No" << endl;
else {
for (long long i = 0; i <= X; i++) {
if (i * 2 + (X - i) * 4 == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
}

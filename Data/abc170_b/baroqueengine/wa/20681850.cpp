#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
int main() {
int x, y;
cin >> x >> y;
bool result = false;
for (int i = 0; i <= x; i++) {
for (int j = x - i; j <= x; j++) {
if (i * 2 + j * 4 == y) {
result = true;
break;
}
}
}
if (result) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}

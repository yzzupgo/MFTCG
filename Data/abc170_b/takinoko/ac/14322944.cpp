#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
int64_t x, y;
cin >> x >> y;
bool ans = false;
for (int64_t i = 0; i <= x; ++i) {
int64_t j = x - i;
if (i * 2 + j * 4 == y) {
ans = true;
break;
}
}
if (ans) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}

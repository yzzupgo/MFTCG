#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool ans = false;
for (int i = 0; i <= 100; ++i) {
int j = x - i;
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

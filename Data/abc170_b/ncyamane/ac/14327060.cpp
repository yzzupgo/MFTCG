#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool flag = false;
for (int i = 0; i <= x; i++) {
int sum = i * 2 + (x - i) * 4;
if (sum == y) {
flag = true;
break;
}
}
if (flag)
cout << "Yes" << endl;
else
cout << "No" << endl;
}

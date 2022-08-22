#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int count = 0;
for (int i = 0; i < x + 1; i++) {
if (i * 2 + (x - i) * 4 == y) {
count++;
}
}
if (count == 0) {
cout << "No" << endl;
}
else {
cout << "Yes" << endl;
}
}

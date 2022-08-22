#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin >> a;
cin >> b;
if (a >= 13) {
cout << b;
}
if (a < 13 && a > 6) {
cout << b / 2;
}
if (a < 6) {
cout << 0;
}
}

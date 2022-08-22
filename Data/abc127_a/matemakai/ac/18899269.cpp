#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) {
cout << b;
return 0;
}
if (6 <= a && a <= 12) {
cout << b / 2;
return 0;
}
if (a <= 5) {
cout << 0;
return 0;
}
}

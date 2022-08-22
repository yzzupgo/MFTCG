#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (13 <= a) {
cout << b << endl;
} else if (6 <= a && a <= 12) {
cout << b / 2 << endl;
} else {
cout << 0 << endl;
}
return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
int n, tmp, count = 1;
cin >> n;
tmp = n;
for (int i = 0; i < 5; i++) {
tmp /= 10;
if (tmp == 0) break;
count++;
}
if (count == 1) {
cout << n << endl;
} else if (count == 2) {
cout << 9 << endl;
} else if (count == 3) {
if (n >= 200) tmp = ((n / 100) * 100) - 100;
cout << tmp + (n % 100 + 1) + 9 << endl;
} else if (count == 4) {
cout << 909 << endl;
} else if (count == 5) {
if (n >= 20000) tmp = ((n / 10000) * 10000) - 10000;
cout << tmp + (n % 10000 + 1) + 909 << endl;
} else {
cout << 90909 << endl;
}
return 0;
}

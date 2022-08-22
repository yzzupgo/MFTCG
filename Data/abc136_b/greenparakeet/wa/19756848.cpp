#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int X = N;
int count = 0;
for (int i = 0; i < 6; i++) {
X /= 10;
count++;
if (X / 10 == 0) {
break;
}
}
count++;
if (count == 1) {
cout << N << endl;
}
if (count == 2) {
cout << 9 << endl;
}
if (count == 3) {
cout << 9 + N % 100 + 1 << endl;
}
if (count == 4) {
cout << 909 << endl;
}
if (count == 5) {
cout << 909 + N % 10000 + 1 << endl;
}
if (count == 6) {
cout << 90909 << endl;
}
}

#include<iostream>
int turu_kame(int x, int y) {
int ashi = 0;
for (int i = 0; i <= x; i++) {
ashi = i * 4 + (x - i) * 2;
if (ashi == y) {
return 1;
}
}
return 0;
}
int main() {
int a[2],l;
int t = 0;
for (int i = 0; i < 2; i++) {
std::cin >> l;
a[i] = l;
}
if (a[0] <= a[1]) {
t = turu_kame(a[0],a[1]);
}
if (t == 0) {
std::cout << "No";
}
else {
std::cout << "Yes";
}
return 0;
}

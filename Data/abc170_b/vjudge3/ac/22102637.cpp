#include <bits/stdc++.h>
using namespace std;
const bool read_file = false;
const char fi[] = "XX.INP";
const char fo[] = "XX.OUT";
void set_up() {
if (read_file) {
freopen(fi, "r", stdin);
freopen(fo, "w", stdout);
}
cin.clear();
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}
void just_do_it();
int main() {
set_up();
just_do_it();
}
const int ms = 1000;
void just_do_it() {
int x, y;
cin >> x >> y;
for (int i = 0; i < ms; i++) {
for (int j = 0; j < ms; j++) {
if (i + j == x && i * 2 + j * 4 == y) {
cout << "Yes";
return;
}
}
}
cout << "No";
return;
}

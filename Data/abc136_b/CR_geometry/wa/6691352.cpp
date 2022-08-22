#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
int N;
cin >> N;
int Nketa=0;
if (N < 10) { Nketa = 1; }
else if (N < 100) { Nketa = 2; }
else if (N < 1000) { Nketa = 3; }
else if (N < 10000) { Nketa = 4; }
else if (N < 100000) { Nketa = 5; }
else if (N < 1000000) { Nketa = 6; }
int ans=0;
if (Nketa == 1) {
ans = Nketa;
}
if (Nketa == 2) {
ans = 9;
}
if (Nketa == 3) {
ans = N - 90;
}
if (Nketa == 4) {
ans = 909;
}
if (Nketa == 5) {
ans = N - 90 - 9000;
}
if (Nketa == 6) {
ans = 90909;
}
cout << ans << endl;
}

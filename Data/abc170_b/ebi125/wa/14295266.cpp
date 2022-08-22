#include "bits/stdc++.h"
#define rep(i,j) for (int i = 0; i < j; i++)
using namespace std;
using ll = long long;
using ull = unsigned long long;
int gcd(int x, int y);
const int INF = 1001001001;
int main() {
int x, y;
cin >> x >> y;
for (int i = 1; i <= x; i++) {
if ((i) * 2 + (x - i) * 4 == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
int gcd(int x, int y) {
int num[3];
num[0] = (x > y) ? x : y;
num[1] = (x <= y) ? x : y;
num[2] = num[0] % num[1];
while (num[2]) {
num[0] = num[1];
num[1] = num[2];
num[2] = num[0] % num[1];
}
return num[1];
}

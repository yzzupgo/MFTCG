#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
int pow_10(int n) {
int x = 1;
for (int i = 0; i < n; i++) {
x *= 10;
}
return x;
}
int main() {
int N;
cin >> N;
int num = 1;
int x = 10;
while (true) {
if (N >= x / 10 && N < x) { break; }
x *= 10;
num++;
}
int ans = 0;
if (num % 2 == 1) {
if (num == 1) {
ans += N;
}
else {
ans += N % pow_10(num - 1) + 1;
}
}
for (int i = 1; i < num; i++) {
if (i % 2 == 1) {
ans += pow_10(i) - pow_10(i - 1);
}
N /= 10;
}
cout << ans << endl;
return 0;
}

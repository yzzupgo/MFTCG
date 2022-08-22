#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int sum = 0;
int digit = log10(N) + 1;
if (digit % 2 != 0) {
int a = pow(10, digit-1);
sum += N - a;
if (digit > 1) {
sum++;
}
}
digit--;
while (digit>0) {
if (digit % 2 != 0) {
sum += pow(10, digit) - pow(10, digit-1);
}
digit--;
}
cout << sum << endl;
}

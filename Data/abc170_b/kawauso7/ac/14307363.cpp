#include <cstdio>
#include <functional>
#include <algorithm>
#include <vector>
#include <limits>
#include <numeric>
#include <type_traits>
#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using Vec = vector<ll>;
using P = pair<ll, ll>;
using VecP = vector<P>;
#define rep(i,n,s) for (int i = s; i < (int)(n); i++)
int gcd(int x, int y) { return (x % y) ? gcd(y, x % y) : y; }
int findSumDigits(int s) {
int num = 0;
int temp = 0;
while (s) {
temp = s % 10;
num += temp;
s = s / 10;
}
return num;
}
int countDivisorNum(int n) {
int count = 0;
for (int i = 1; i <= n; i++) {
if (n % i == 0) {
count++;
}
}
return count;
}
int main() {
int x, y;
cin >> x >> y;
int j = 0;
int temp = 0;
for (int i = 0; i <= x; i++) {
j = x - i;
temp = i * 2 + j * 4;
if (temp == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}

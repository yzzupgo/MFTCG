#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int minimum = 1000000;
int sum = 0;
int mini;
for (int i=1; i<=N; i++) {
if (abs(L+i-1) < minimum) {
minimum = abs(L+i-1);
mini = i;
}
}
for (int i=1; i<=N; i++) {
if (i != mini)
sum += L+i-1;
}
cout << sum;
}

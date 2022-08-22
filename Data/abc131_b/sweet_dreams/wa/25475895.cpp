#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int minimum = 1000;
int sum = 0;
int mini;
for (int i=0; i<N; i++) {
if (abs(L+i-1) < minimum) {
minimum = L+i;
mini = i;
}
}
for (int i=0; i<N; i++) {
if (i != mini)
sum += L+i;
}
cout << sum;
}

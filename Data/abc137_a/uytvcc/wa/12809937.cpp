#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >>B;
int p, m, k;
p = A + B;
m = A - B;
k = A * B;
if (p >= m && p >= k) {
cout << p << endl;
}
if (m >= p && m >= k) {
cout << m <<endl;
}
if (k >= p && k >= m) {
cout << k << endl;
}
}

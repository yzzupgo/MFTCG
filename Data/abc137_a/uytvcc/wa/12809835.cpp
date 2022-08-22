#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >>B;
int p, m, k;
p = A + B;
m = A - B;
k = A * B;
if (p > m && p > k) {
cout << p << endl;
} else if (m > p && m > k) {
cout << m <<endl;
} else {
cout << k << endl;
}
}

#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int S = A + B;
int T = A - B;
int U = A * B;
if (S >= T && S >= U) {
cout << S << endl;
} else if (T >= S && T >= U) {
cout << T << endl;
} else if (U >= S && U >= T) {
cout << U << endl;
}
}

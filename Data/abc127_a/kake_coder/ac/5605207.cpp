#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A;
cin >> B;
if (13 <= A) {
cout << B;
} else if (A <= 5) {
cout << 0;
} else {
cout << B / 2;
}
}

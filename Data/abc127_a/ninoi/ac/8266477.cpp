#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if (13 <= A) {
cout << B << endl;
return 0;
}
if (6 <= A ) {
cout << B / 2 << endl;
return 0;
}
cout << 0 << endl;
}

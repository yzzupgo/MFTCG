#include <bits/stdc++.h>
using namespace std;
int A, B;
int main() {
cin >> A;
cin >> B;
if (A > 12) {
cout << B;
} else if (5 < A and A < 13) {
cout << B/2;
} else if ( A < 6 ) {
cout << 0;
}
return 0;
}

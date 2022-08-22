#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B ;
if ( 13 <= A ) {
cout << B << endl;
}
else if ( 6 <= A <= 12 ) {
cout << B / 2 << endl;
}
else {
cout << 0 << endl;
}
}

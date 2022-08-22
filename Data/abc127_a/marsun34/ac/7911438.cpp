#include <bits/stdc++.h>
using namespace std;
int main() {
int A=0, B=0;
cin >> A >> B;
int half = B / 2;
if(A <= 5) {
cout << "0" << endl;
} else if(6 <= A && A <= 12) {
cout << half << endl;
} else {
cout << B << endl;
}
return 0;
}

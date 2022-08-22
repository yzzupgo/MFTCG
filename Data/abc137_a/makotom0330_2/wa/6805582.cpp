#include <iostream>
using namespace std;
int main(void) {
int A, B, plus, minus, multiple;
cin >> A >> B;
plus = A + B;
minus = A - B;
multiple = A*B;
if(plus > minus && plus > multiple) {
cout << plus << endl;
} else if(minus > plus && minus > multiple) {
cout << minus << endl;
} else {
cout << multiple << endl;
}
return 0;
}

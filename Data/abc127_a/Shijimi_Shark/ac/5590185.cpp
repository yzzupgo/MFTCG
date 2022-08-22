#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;
int main() {
uint16_t A, B;
cin >> A >> B;
if (A > 12) {
cout << B << endl;
} else if (A < 13 && A > 5) {
cout << B / 2 << endl;
} else {
cout << 0 << endl;
}
return 0;
}

#include <iostream>
#include<vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) {
cout << b << endl;
return 0;
}
else if (a >= 6 && a < 12) {
cout << b /2 << endl;
return 0;
}
else {
cout << 0 << endl;
return 0;
}
}

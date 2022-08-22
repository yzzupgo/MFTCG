#include <algorithm>
#include <array>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char** argv) {
int n;
cin >> n;
if (n < 10) {
cout << n << endl;
}
else if (n < 100) {
cout << 9 << endl;
}
else if (n < 1000) {
cout << 9 + (n - 100 + 1) << endl;
}
else if (n < 10000) {
cout << 909 << endl;
}
else if (n < 100000) {
cout << 909 + (n - 10000 + 1) << endl;
}
else if (n < 1000000) {
cout << 90909 << endl;
}
return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
int a, b;
cout << max(max(a + b, a - b), a * b) << '\n';
return 0;
}

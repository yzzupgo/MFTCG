#include <iostream>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int plus_minus = max(A + B, A - B);
cout << max(plus_minus, A * B);
return 0;
}

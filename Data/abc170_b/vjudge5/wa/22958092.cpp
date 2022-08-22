#include <iostream>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
cout << ((b&1) == 0 && (b>>2) <= a && (b>>1) >= a ? "Yes" : "No") << endl;
return 0;
}

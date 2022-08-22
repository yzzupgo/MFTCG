#include <iostream>
using namespace std;
int main() {
int a, b; cin >> a >> b;
if(b <= 5) {
cout << 0 << endl;
} else if(b <= 12) {
cout << b/2 << endl;
} else {
cout << b << endl;
}
return 0;
}

#include <iostream>
using namespace std;
int main() {
float a;
int b;
cin >> a;
a *= 1.08;
a *= 100;
b = a;
b /= 10;
if(b < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}

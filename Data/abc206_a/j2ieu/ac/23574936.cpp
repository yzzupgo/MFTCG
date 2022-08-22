#include <iostream>
using namespace std;
int main() {
float a;
cin >> a;
a *= 1.08;
int b = a * 100;
b /= 100;
if(b < 206) {
cout << "Yay!" << endl;
} else if(b == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}

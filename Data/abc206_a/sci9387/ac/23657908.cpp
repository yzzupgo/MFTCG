#include <iostream>
using namespace std;
int main(void) {
int x;
cin >> x;
x *= 1.08;
if(x <= 205) {
cout << "Yay!" << endl;
} else if(x >= 207) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}

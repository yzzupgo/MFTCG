#include <iostream>
using namespace std;
int main() {
int a;
cin >> a;
int b;
b = (int)(1.08 * a);
if(b < 206) {
cout << " Yay! ";
} else if(b > 206) {
cout << " :( ";
} else {
cout << " so-so ";
}
}

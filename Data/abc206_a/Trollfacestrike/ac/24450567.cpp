#include <iostream>
using namespace std;
int main() {
short x;
cin >> x;
x = 1.08 * x;
if(x == 206) {
cout << "so-so";
} else if(x > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
}

#include <iostream>
using namespace std;
int main() {
int a;
cin >> a;
int b = a * 1.08;
if(b < 206) {
cout << "Yay!\n";
} else if(b == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}

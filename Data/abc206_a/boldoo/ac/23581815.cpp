#include <iostream>
using namespace std;
int main() {
float b;
cin >> b;
b = b * 1.08;
int a = b;
if(a == 206) {
cout << "so-so";
return 0;
}
if(a > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
return 0;
}

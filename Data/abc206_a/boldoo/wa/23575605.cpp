#include <iostream>
using namespace std;
int main() {
float a;
cin >> a;
a = a * 1.08;
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

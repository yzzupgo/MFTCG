#include <iostream>
#include <vector>
using namespace std;
int main() {
int a;
cin >> a;
if(a * 1.08 < 206) {
cout << "Yay!";
} else if(a * 108 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}

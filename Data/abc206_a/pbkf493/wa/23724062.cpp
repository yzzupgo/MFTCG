#include <iostream>
using namespace std;
int main() {
int n, x = 0;
cin >> n;
x = n * 1.08;
if(x < 206) {
cout << "yay!";
} else {
if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
}

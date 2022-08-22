#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int a = n * 1.08;
if(a < 206) {
cout << "Yay!";
} else {
if(a > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
}
